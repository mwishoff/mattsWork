<?php
	
	require_once 'sentiment_analysis.php';

	class Indexer{
		private $index;
		private $genre_groupings;
		private $ids;
		private $data_dir;
		private $json_file_name;

		const INDEX_FILE = "indexed_steam_data.json";
		const DATA_DIR = "./SteamScrapedData/";


		//Constructor

		public function __construct($json_file_name = NULL, $data_dir = NULL){
			$this->json_file_name = ($json_file_name === NULL)? self::INDEX_FILE : $json_file_name;
			$this->data_dir = ($data_dir === NULL)? self::DATA_DIR : $data_dir;
			$this->load_from_json();
			$this->make_index();
			//Commented out because on the server, I don't want to write all the time
			// $this->write_index_to_file();
		}

		// Private Functions:

		/*  make_index goes through all of the files in the given directory and 
			adds new data files to the index if they are present.
		*/
		private function make_index(){
			if( ($dir = opendir($this->data_dir)) !== NULL){
				while(($file = readdir($dir)) !== false)
					if(strpos($file, ".html") !== false)
						$this->add_file_to_index($file);

				closedir($dir);
			}
		}

		/*	load_from_json loads previous index data from a JSON file.
			if the JSON file doesn't exist, it creates empty arrays.
		*/
		private function load_from_json(){

			if(file_exists($this->json_file_name)){
				$data = file_get_contents($this->json_file_name);
				$data = mb_convert_encoding($data, 'UTF-8');
				$json_data = json_decode($data, True);
				//echo implode($data);

				$this->index = $json_data["index"];
				$this->genre_groupings = $json_data["genre_groupings"];
				$this->ids = $json_data["ids"];
			}else{
				$this->index = [];
				$this->genre_groupings = [];
				$this->ids = [];
			}
		}

		/* add_file_to_index adds a file to the index if the game id doesn't exist already
		*/
		public function add_file_to_index($filename){
			// get_game_id
			$game_id = $this->get_game_id($filename);
			//This echo is for debugging purposes, seeing what is being added
			// echo $game_id . "\n";

			if(!array_key_exists($game_id, $this->ids)){
				// openfile either fopen or file_get_contents($filename);
				$filecontents = file_get_contents($this->data_dir. $filename);
				// get_title
				$game_title = $this->get_game_title($filecontents);
				// get_game_genres
				$game_genres = $this->get_game_genres($filecontents);
				// get_review_scores
				$game_score = $this->get_review_score($filecontents);
				
				if($game_title !== NULL && $game_genres !== NULL && $game_score !== NULL){
					$this->index[$game_title] = array( "genres" => $game_genres,
						"score" => $game_score,
						"id" => $game_id
						);
					$this->ids[$game_id] = $game_title;
					foreach($game_genres as $genre){
						$this->add_game_to_genre($genre, $game_title);
					}

					// echo "gametitle: " . $game_title . " game_genres: " . implode(",", $game_genres) . " score: " . $game_score . " id: " . $game_id . "\n"; // DEBUG
				}
			}
		}

		/* add_content_to_index adds the given string contents to the index if the game id doesn't exist already
		*/
		public function add_content_to_index($game_id, $contents, $reviews){
			//This echo is for debugging purposes, seeing what is being added
			// echo $game_id . "\n";

			if(!array_key_exists($game_id, $this->ids)){
				// get_title
				$game_title = $this->get_game_title($contents);
				// get_game_genres
				$game_genres = $this->get_game_genres($contents);
				// get_review_scores
				$game_score = $this->get_review_score_from_html($reviews);
				
				if($game_title !== NULL && $game_genres !== NULL && $game_score !== NULL){
					$this->index[$game_title] = array( "genres" => $game_genres,
						"score" => $game_score,
						"id" => $game_id
						);
					$this->ids[$game_id] = $game_title;
					foreach($game_genres as $genre){
						$this->add_game_to_genre($genre, $game_title);
					}

					// echo "gametitle: " . $game_title . " game_genres: " . implode(",", $game_genres) . " score: " . $game_score . " id: " . $game_id . "\n"; // DEBUG
				}
			}
		}

		/*	get_game_id parses the id from the filename
		*/
		private function get_game_id($filename){
			$start = strlen("output-");
			$end = strpos($filename, ".html");
			return substr($filename, $start, $end - $start);
		}

		/*	get_game_title searches the file text for 
			<title> and </title> and returns the parsed game title.
		*/
		private function get_game_title($filestream){
			// search file for title tags
			$start = strpos($filestream, "<b>Title:</b>");
			if($start === false)
				return NULL;
			$start += strlen("<b>Title:</b>");
			$end = strpos($filestream, "<br>", $start);
			// return parsed title
			$title = $this->parse_key_str(substr($filestream, $start, $end - $start));	
			
			return $title;
		}

		//Function to strip out unnecessary characters and make all characters lowercase
		public function parse_key_str($str){
			$result = strip_tags($str);
			$result = strtolower($result);
			$result = preg_replace("/[^A-Za-z0-9 ]/", '', $result);
			$result = preg_replace("/[\s]+/", " ", $result);
			$result = trim($result);
			return $result;
		}

		/*	get_game_genres searches the file text for the "Genre:" tag
			then it parses the genres from the Steam page to be returned.
		*/
		private function get_game_genres($filestream){
			// search file for genre tag
			$start = strpos($filestream, "Genre:");
			if($start === false)
				return NULL;
			$start +=  + strlen("Genre:</b> ");
			$end = strpos($filestream, "<br>", $start);
			// return list of genres
			$genres = explode(",", str_replace(" ", '', strtolower(strip_tags(substr($filestream, $start, $end - $start)))));

			return $genres;
		}

		/*	add_game_to_genre adds the game title to 
			the game_groupings associative array for a given genre.
		*/
		private function add_game_to_genre($genre, $game_title){
			if(!array_key_exists($genre, $this->genre_groupings)){
				$this->genre_groupings[$genre] = [];
			}

			array_push($this->genre_groupings[$genre], $game_title);
		}

		/*	get_review_score takes all the scores given 
			to each review from the API and averages them.
		*/
		private function get_review_score($filestream){
			$final_score = 0;
			$reviews = $this->find_all_reviews($filestream);
			if(count($reviews) == 0) {
				return NULL;
			}

			// score review
			// foreach($reviews as $review){
			// 	$score = $this->get_review_score_from_api($review);
			// 	if($score === NULL) continue;
			// 	$final_score += $score;
			// }

			//Get total score from api, passing in the list of reviews
			$final_score = $this->get_total_score_from_api($reviews);
			// echo $final_score . "\n";
			// return the average of the scores
			return $final_score / count($reviews);
		}

		/* 	find_all_reviews finds all reviews in the file text 
			and adds them to an associative array.
		*/
		private function find_all_reviews($filestream){
			$return_array = [];
			$array_element = $this->find_review($filestream, 0);
			while($array_element !== NULL){
				// echo $array_element["value"] . '\n'; // DEBUG
				if($array_element["value"] !== NULL && $array_element["value"] !== '')
					$return_array[] = $array_element["value"];
				$array_element = $this->find_review($filestream, $array_element["end"]);
			}
			// echo count($return_array) . "\n"; // DEBUG
			// echo implode("\n", $return_array); // DEBUG
			return $return_array;
		}

		/*	gets review score for an html page 
		*/
		private function get_review_score_from_html($filestream){
			$final_score = 0;
			$reviews = $this->find_all_reviews_from_html($filestream);
			echo count($reviews) . "\n";
			if(count($reviews) == 0)
				return NULL;
			$final_score = $this->get_total_score_from_api($reviews);

			return $final_score / count($reviews);
		}

		/* finds all reviews on html page
		*/
		private function find_all_reviews_from_html($filestream){
			$array_element = $this->find_review_in_html($filestream, 0);
			while($array_element !== NULL){
				// echo $array_element["value"] . '\n'; // DEBUG
				if($array_element["value"] !== NULL && $array_element["value"] !== '')
					$return_array[] = $array_element["value"];
				$array_element = $this->find_review_in_html($filestream, $array_element["end"]);
			}
			// echo count($return_array) . "\n"; // DEBUG
			// echo implode("\n", $return_array); // DEBUG
			return $return_array;
		}

		/* finds the first individual review in the html given an index.
		*/
		private function find_review_in_html($filestream, $index){
			$start = strpos($filestream, 'class="date_posted"', $index);
			if($start === False)
				return NULL;
			$start = strpos($filestream, '</div>', $start) + strlen("</div>");
			$end = strpos($filestream, '</div>', $start);

			$review = $this->parse_key_str(substr($filestream, $start, $end - $start));
			return array("value" => $review, "end" => $end);
		}

		/*	find_review finds the next review in the document from a given point.
			it also removes all html tags and all non-alphanumeric characters.
		*/
		private function find_review($filestream, $index){
			$start = strpos($filestream, 'class="postedDate"', $index);
			if($start === False)
				return NULL;

			$start = strpos($filestream, '<div class="content"', $start) + strlen('<div class="content">');
			$end = strpos($filestream, '<div class="gradient"></div>', $start);
			$review = $this->parse_key_str(substr($filestream, $start, $end - $start));
			//echo $review . "\n"; DEBUG
			return array("value" => $review,  "end"=>$end); 
		}

		/*	get_review_score_from_api makes the API call to the text analysis API. 
			should the API cause a crash to the program, 
			the indexer will make a back up to the data in the form of a json file.
		*/
		private function get_review_score_from_api($review){
			$score = NULL;
			try {
				// API call:
				sleep(10);
				$score = SentimentAnalysis::get_score($review);

			} catch (Exception $e) {
				// make record of current associative arrays.
				//These two lines are debug purposes
				// echo $e->getMessage() . "\n";
				// echo $review . "\n";
				$this->write_index_to_file();
				exit();
			} 
		
			return $score;
		}

		/*
		*/
		private function get_total_score_from_api($reviews){
			echo "I'm here \n";
			$final_score = NULL;
			try {
				// API call:
				sleep(10);
				$final_score = SentimentAnalysis::get_score_sum($reviews);

			} catch (Exception $e) {
				// make record of current associative arrays.
				//These two lines are debug purposes
				echo $e->getMessage() . "\n";
				$this->write_index_to_file();
				exit();
			} 
			return $final_score;
		}

		// Public Functions:

		/*	get_all_games_in_genre returns an array of game titles for a given genre
			and null if the genre doesn't exist.
		*/
		public function get_all_games_in_genre($genre){
			if(array_key_exists($genre, $this->genre_groupings))
				return $this->genre_groupings[$genre];

			return NULL;
		}

		/*	get_game_data returns the data associated with a game_title.
			this returns NULL if the game doesn't exist.
		*/
		public function get_game_data($game_title){
			if(array_key_exists($game_title, $this->index)){
				return $this->index[$game_title];
			}

			return NULL;
		}

		/*	is_game_in_genre returns a boolean
			if game is in the genre grouping it returns true.
			else false.
		*/
		public function is_game_in_genre($game_title, $genre){
			return (array_key_exists($genre, $this->genre_groupings) && in_array($game_title, $this->genre_groupings[$genre]));
		}

		/*	get_genres_for a game_title. 
		*/
		public function get_genres_for($game_title){
			if(array_key_exists($game_title, $this->index))
				return $this->index[$game_title]["genres"];

			return NULL;
		}

		/*	get_score_for a game_title 
		*/
		public function get_score_for($game_title){
			if(array_key_exists($game_title, $this->index))
				return $this->index[$game_title]["score"];

			return NULL;
		}

		/*	write_index_to_file writes the index to a file.
		*/
		public function write_index_to_file(){
			$myfile = fopen($this->json_file_name, "w");
			$str_rep = json_encode( array("index" => $this->index, "genre_groupings" => $this->genre_groupings, "ids" => $this->ids));
			// echo $str_rep; // DEBUG
			$result = fwrite($myfile, $str_rep);

			if(!$result)
				echo "there was an error\n"; 

			fclose($myfile);
		}

		/*	get_game_from_id gets a game title from a given id
		*/
		public function get_game_from_id($game_id){
			if(array_key_exists($game_id, $this->ids))
				return $this->ids[$game_id];

			return NULL;
		}

		/*	get_id_from_game gets a game id from a given title.
		*/
		public function get_id_from_game($game_title){
			if(array_key_exists($game_title, $this->index))
				return $this->ids[$index]["id"];

			return NULL;
		}
	}
?>