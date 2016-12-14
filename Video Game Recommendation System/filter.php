<?php

require_once("./indexer.php");

class Filter {

	const MAX_THRESHOLD = 3000;
	const MIN_THRESHOLD = 800;

	//Given a list of games related to the user's query, the indexer object, and the
	//user's query, this function will return the list of games that are above
	//a certain threshold 
	public static function filter_by_score($related_games_list, $indexer, $normalize_query) {
    	//filter the games by top sentiment and also remove query from the list
    	$score_threshold = 0.7;
    	$return_array = array();
	    foreach($related_games_list as $genre => $genre_game_list) {
	        foreach($genre_game_list as $key => $game) {
	            $game_data = $indexer->get_game_data($game);
	            if($game !== $normalize_query && ($game_data["score"] > $score_threshold)) {
	               	if(!in_array(array($game => $game_data), $return_array, True)){
	               		$return_array[] = array($game => $game_data);
	               	}
	            }
	        }
	    }

	    return $return_array;
	}

	//Given the list of games found by filter_by_score function or otherwise,
	//this will return a filtered game list, where the filtering process
	//is dependent on the second parameter, which is a list of games
	//already found on the user's games list
	public static function filter_by_users_list($related_game_list, $steam_user_games) {
		foreach($related_game_list as $key => $game) {
			foreach($game as $game_data) {
				foreach($steam_user_games as $game_id) {
					if($game_data["id"] == $game_id) {
						unset($related_game_list[$key]);
					}
				}
			}
		}
		return $related_game_list;
	}

	//Given a list of games, group the games into three categories, 90, 80, and 70
	public static function group_by_percentage($related_game_list) {
		$percentage_grouping = array(
			"90" => array(),
			"80" => array(),
			"70" => array()
			);

		foreach($related_game_list as $game) {
			foreach($game as $game_data) {
				if($game_data["score"] >= 0.9) {
					$percentage_grouping["90"][] = $game;
				} else if($game_data["score"] >= 0.8) {
					$percentage_grouping["80"][] = $game;
				} else {
					$percentage_grouping["70"][] = $game;
				}
			}
		}
		return $percentage_grouping;
	}

	// filters the correlated games with steam user games and the query.
	public static function filter_correlation($correlations, $normalize_query, $steam_user_games) {
		$remove_keys = [];
		$original_keys = [];
		$indexer = new Indexer();
		// remove non-query from correlations
		foreach($correlations as $key => $value){
			//echo "key: " . $key . "\t" . "normalize_query: " . $normalize_query . "\n";
			$original_keys[$key] = $value;
			$games_in_key = explode("-", $key);
			if(!($normalize_query === $games_in_key[0] || $normalize_query === $games_in_key[1]))
				$remove_keys[$key] = $value;
		}

		$correlations = array_diff_key($original_keys, $remove_keys);

		$remove_keys = [];
		$original_keys = [];
		// remove non-query user owned steam games
		foreach($correlations as $key => $value){
			$original_keys[$key] = $value;
			foreach ($steam_user_games as $game_id) {
				$game_title = $indexer->get_game_from_id($game_id);
				if($game_title !== $normalize_query){
					$games_in_key = explode("-", $key);
					if($game_title === $games_in_key[0] || $game_title === $games_in_key[1])
						$remove_keys[$key] = $value;
				}
			}
		}

		$correlations = array_diff_key($original_keys, $remove_keys);

		return $correlations;
	}

	// finds the game that has the highest correlation with the query that lies within our threshold.
	public static function find_max_correlation($correlations, $normalize_query) {
		$correlation_max = array("value" => 0, "key" => "");

		foreach($correlations as $key => $value){
			if($value < self::MAX_THRESHOLD && $value > self::MIN_THRESHOLD && $value > $correlation_max["value"]){
				$correlation_max["key"] = $key;
				$correlation_max["value"] = $value;
			}
		}

		if($correlation_max["key"] !== ""){
			$start = strpos($correlation_max["key"], $normalize_query);
			$split_name = explode("-", $correlation_max["key"]);

			if($start === 0){
				$correlation_max["key"] = $split_name[1];
			}else{
				$correlation_max["key"] = $split_name[0];
			}
		}

		return $correlation_max;
	}
}