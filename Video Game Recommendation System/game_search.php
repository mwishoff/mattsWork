<?php

// $searchTerm = str_replace(" ", "+", $_POST["searchTerm"]);

// $curl_thing = curl_init("http://localhost:8983/solr/steamedcorn/select?wt=json&indent=true&q=\"{$searchTerm}\"");
// $string_info = curl_exec($curl_thing);

require_once 'indexer.php';
require_once 'filter.php';
require_once 'steam_user.php';

const CLICK_MODIFIER = .1;

//Normalize the query, same as in the dataset
$normalize_query = strtolower(str_replace("&", "amp", $_POST["searchTerm"]));
$normalize_query = preg_replace("/[^A-Za-z0-9 ]/", '', $normalize_query);
$normalize_query = preg_replace("/[\s]+/", " ", $normalize_query);
$normalize_query = trim($normalize_query);
$steamId = "";

if(isset($_POST["steamID"])) {
	$steamId = $_POST["steamID"];
}

$steam_user = new SteamUser($steamId);
$steam_user_games = $steam_user->get_user_steam_games();

$indexer = new Indexer();
$genre_of_query = $indexer->get_genres_for($normalize_query);
$related_games_list = array();

foreach($genre_of_query as $genre) {
    $related_games_list += array($genre => $indexer->get_all_games_in_genre($genre));
}

$filtered_list_by_score = Filter::filter_by_score($related_games_list, $indexer, $normalize_query);
$filtered_list_by_user_games = Filter::filter_by_users_list($filtered_list_by_score, $steam_user_games);
$grouped_list_by_percentage = Filter::group_by_percentage($filtered_list_by_user_games);

// echo json_encode($grouped_list_by_percentage);

$correlations = json_decode(mb_convert_encoding(file_get_contents("./correlation.json"), 'UTF-8'));
$game_clicks = json_decode(mb_convert_encoding(file_get_contents("./game_clicks.json"), 'UTF-8'));

// correlation handling:
$correlations = Filter::filter_correlation($correlations, $normalize_query, $steam_user_games);

$correlation_max = Filter::find_max_correlation($correlations, $normalize_query);

$correlated_key = ($correlation_max["key"] === "") ? "null_value" : $correlation_max["key"];
$correlated_game = array($correlated_key => $indexer->get_game_data($correlated_key));

echo json_encode(array("correlated" => $correlated_game, 
	"results" => $grouped_list_by_percentage));

// // click handling:
// // $game_clicks $grouped_list_by_percentage

// // add modifier to object list
// foreach($grouped_list_by_percentage as $percent => $data){
// 	foreach($data as $game_title => $game_data){
// 		if(array_key_exists($game_data["id"], $game_clicks))
// 			$game_data["modifier"] = self::CLICK_MODIFIER * $game_clicks[$game_data["id"]];
// 	}
// }

// $return_array = [];

// foreach($grouped_list_by_percentage as $percent => $data){
// 	$min = (count($data) < 5)? count($data) : 5;


// }

