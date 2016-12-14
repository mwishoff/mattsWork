<?php
// ONLY EVER RUN ONCE
require_once("indexer.php");

$all_user_game_list_json = json_decode(mb_convert_encoding(file_get_contents("./WebCrawler/all_user_game_list.json"), 'UTF-8'));

$indexer = new Indexer();

//Function to strip out unnecessary characters and make all characters lowercase
function parse_key_str($str){
	$result = strip_tags($str);
	$result = strtolower($result);
	$result = preg_replace("/[^A-Za-z0-9 ]/", '', $result);
	$result = preg_replace("/[\s]+/", " ", $result);
	$result = trim($result);
	return $result;
}

$correlation_hash = array();

echo "Search your engines!\n";
//Loop through the entire $all_user_game_list_json variable which is an associative array
//representing all the game users collected from game_api_call.rb
foreach($all_user_game_list_json as $obj){
	echo "Vrooom\n";
	//Loop through the individual user's game list
	foreach($obj as $response => $data){
		//echo $data->game_count;
		echo " Beep beep\n";
		$num_games = $data->game_count;
		$games = $data->games;
		//Loop through the games list
		for($i = 0; $i < $num_games; $i++ ){
			$game1 = parse_key_str($games[$i]->name);
			$game1_data = $indexer->get_game_data($game1);
			//if game1_data is not null or empty
			if($game1_data)
				//Loop through the games list, starting at the next index
				for($j = $i + 1; $j < $num_games; $j++){
					$game2 = parse_key_str($games[$j]->name);
					$game2_data = $indexer->get_game_data($game2);
					//check if game2_data is not null or empty
					if($game2_data){
						$count = 0;
						//loop through the genre of game1
						foreach($game1_data["genres"] as $genre){
							echo "VROOMM VROOOM\n";
							//Check if the genre isn't freetoplay since everyone has access to this game
							//so it won't be very useful to find correlation to
							//also check if game2 is in genre
							if($genre !== "freetoplay" && $indexer->is_game_in_genre($game2, $genre)){
								$count++; 
								break;
							}
						}
						if($count > 0){
							$key = (strcmp($game1, $game2) < 0) ? $game1 .'-'. $game2 : $game2 .'-'. $game1;
							//if game is in the correlation hash, increment, else add it to the hash
							if(array_key_exists($key, $correlation_hash))
								$correlation_hash[$key] += $count;
							else
								$correlation_hash[$key] = $count;
						}
					}

				}
		}
		echo "Checkered Flag!" . "\n";
	}
}

//Open the stream and write to the correlation.json file
$stream = fopen("correlation.json", "w");
$result = fwrite($stream, json_encode($correlation_hash));
fclose($stream);