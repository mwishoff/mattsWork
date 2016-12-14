<?php

require_once 'HTTP/Request2.php';

class SentimentAnalysis {
	
	const API_KEYS = array('8ac4e05864b640c188c88404cadc22b5', '22f3cafd736d4f91bf958f23f9d102c5',
		'078deb9562e6493a998628a5c535257b', '561adb90e1554c3ca8b04f4a0c69b29c', '8e10f15b53d94d54b4cf6cd5d703bd58', 'd2ec00c2770f45bc96ca884fba18bc34');
	static $index = 0;

	//Given a single review, find the score of the single review
	public static function get_score($text) {
		$request = new Http_Request2('https://westus.api.cognitive.microsoft.com/text/analytics/v2.0/sentiment');
		$url = $request->getUrl();
		$score = 0;

		if(self::$index>5) {
			self::$index = 0;
		}

		$headers = array(
		    // Request headers
		    'Content-Type' => 'application/json',
		    'Ocp-Apim-Subscription-Key' => self::API_KEYS[self::$index],
		);

		self::$index++;

		$request->setHeader($headers);

		$parameters = array(
		    "documents" => array(
		    		array("language" => "en", "id" => "review", "text" => $text)
		    	)
		);

		$request->setMethod(HTTP_Request2::METHOD_POST);

		// Request body
		$request->setBody(json_encode($parameters));

		try{
		    $response = $request->send();
		    echo $response->getBody() . "\n";
		    $decoded_response_body = json_decode($response->getBody(), true);
		    if(isset($decoded_response_body["documents"])) {
		    	$score = $decoded_response_body["documents"][0]["score"];
		    }
		} catch (HttpException $ex){
		    echo $ex . "\n";
		} catch (MessageException $ex2) {
			echo $ex . "\n";
		}
		return $score;
	}

	//Given a list of reviews, make an API call to get the scores of all the reviews
	//and then sum up that score
	public static function get_score_sum($list_of_reviews) {
		$request = new Http_Request2('https://westus.api.cognitive.microsoft.com/text/analytics/v2.0/sentiment');
		$url = $request->getUrl();
		$score = 0;

		if(self::$index>5) {
			self::$index = 0;
		}

		$headers = array(
		    // Request headers
		    'Content-Type' => 'application/json',
		    'Ocp-Apim-Subscription-Key' => self::API_KEYS[self::$index],
		);

		self::$index++;

		$request->setHeader($headers);

		$parameters = array(
		    "documents" => array()
		);

		for($i = 0; $i < count($list_of_reviews); $i++) {
			$parameters["documents"][] = array("language" => "en", "id" => "review{$i}", "text" => $list_of_reviews[$i]);
		}

		$request->setMethod(HTTP_Request2::METHOD_POST);

		// Request body
		$request->setBody(json_encode($parameters));

		try{
		    $response = $request->send();
		    echo $response->getBody() . "\n";
		    $decoded_response_body = json_decode($response->getBody(), true);
		    foreach($decoded_response_body["documents"] as $documents) {
		    	$score += $documents["score"];
		    }
		} catch (HttpException $ex){
		    echo $ex . "\n";
		} catch (MessageException $ex2) {
			echo $ex . "\n";
		}
		return $score;
	}
}