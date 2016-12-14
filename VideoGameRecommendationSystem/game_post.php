<?php

require_once 'indexer.php';

//Get game id from the AJAX post
$game_id = $_POST["newGame"];
//Create a curl object to the game page
$curl_initialize = curl_init("http://store.steampowered.com/app/{$game_id}/");
//initialize options to return a string from curl
curl_setopt($curl_initialize, CURLOPT_RETURNTRANSFER, true);
//Make the curl call to get the page
$contents = curl_exec($curl_initialize);
//Create second curl object to the game reviews page
$curl_initialize2 = curl_init("http://steamcommunity.com/app/{$game_id}/reviews");
curl_setopt($curl_initialize2, CURLOPT_RETURNTRANSFER, true);
$review_contents = curl_exec($curl_initialize2);

// echo shell_exec("sudo ruby WebCrawler/webscraper.rb " . $game_id);
// $filename = "./NewGame/output-{$game_id}.html";
//Create the indexer object
$indexer = new Indexer();
//Add the review and the game contents into the indexer
$indexer->add_content_to_index($game_id, $contents, $review_contents);
//Save to file
$indexer->write_index_to_file();

//Send a response back to the front-end
echo $indexer->get_game_from_id($game_id);