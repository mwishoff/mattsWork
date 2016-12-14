<?php
	class GameClicksLogger{
		const JSON_FILE = "./game_clicks.json";
		private $json;

		function __construct(){
			$this->load();
		}

		//Load the game_clicks.json into memory if it exists
		function load(){
			if(file_exists(self::JSON_FILE)){
				$data = file_get_contents(self::JSON_FILE);
				$data = mb_convert_encoding($data, 'UTF-8');
				$json_data = json_decode($data, True);
				//echo implode($data);

				$this->json = $json_data;
			}else{
				$this->json = [];
			}
		}

		//Add the game id into the game_clicks json associative array
		function add_to_json($id, $game_list_id){
			if(array_key_exists($id, $this->json))
				$this->json[$id] += 1;
			else
				$this->json[$id] = 1;

			//Loop through the game_list_id array
			foreach($game_list_id as $game_id) {
				//Check if the $id parameter equals to an element in the $game_list_id array
				//if it doesn't, then decrement the value at the id if it exists
				//This is because these games weren't click, so we decrement any games' value
				if($id !== $game_id)
					if(array_key_exists($game_id, $this->json))
						$this->json[$game_id] -= 1;
					else
						$this->json[$game_id] = -1;
			}

			$this->write_to_json();
		}

		//writes the json into file
		function write_to_json(){
			$myfile = fopen(self::JSON_FILE, "w");
			$str_rep = json_encode($this->json);
			// echo $str_rep; // DEBUG
			$result = fwrite($myfile, $str_rep);

			if(!$result)
				echo "there was an error\n"; 

			fclose($myfile);
		}
	}
?>