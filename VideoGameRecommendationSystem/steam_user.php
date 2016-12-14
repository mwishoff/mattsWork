<?php

require_once 'HTTP/Request2.php';

class SteamUser {

	const STEAM_API_KEY = "CFB83BCDC65DB4325A005DDD4B0E7A35";
	private $steamId;

	public function __construct($steamId) {
		$this->steamId = $steamId;
		$steamId2 = explode(":", $steamId);
		if(count($steamId2) > 1) {
			$v = 0x0110000100000000;
			$z = $steamId2[2];
			$y = $steamId2[1];

			$w = $z*2 + $v + $y;
			$this->steamId = $w;
		}
	}

	//Function to make an API call to the steam API and get the steam user's games
	public function get_user_steam_games() {
		$user_games = NULL;
		$request = new Http_Request2("http://api.steampowered.com/IPlayerService/GetOwnedGames/v0001/?key=" . self::STEAM_API_KEY . "&steamid={$this->steamId}&format=json&include_appinfo=1");
		$url = $request->getUrl();

		$headers = array(
		    // Request headers
		    'Content-Type' => 'application/json'
		);

		$request->setHeader($headers);

		$request->setMethod(HTTP_Request2::METHOD_GET);

		try{
		    $response = $request->send();
		    $decoded_response_body = json_decode($response->getBody(), true);
		    $user_games = $decoded_response_body["response"]["games"];
		} catch (HttpException $ex){
		    echo $ex . "\n";
		} 

		$user_steam_id_list = $this->get_user_steam_id_list($user_games);

		return $user_steam_id_list;
	}

	//Helper function to return the list of game id's
	private function get_user_steam_id_list($steam_games) {
		$steam_id_list = array();
		foreach($steam_games as $steam_game) {
			$steam_id_list[] = $steam_game["appid"];
		}
		return $steam_id_list;
	}
}