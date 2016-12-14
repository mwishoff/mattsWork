<?php
	
require_once("game_click_logger.php");

$obj = new GameClicksLogger();
$obj->add_to_json($_POST["gameId"], $_POST["gameIdList"]);	
	