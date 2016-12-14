<!DOCTYPE html>
<html>
    <head>
        <meta charset="utf-8"/>
        <title>Steamed Corn</title>
        <meta name="description" content="">
        <meta name="viewport" content="width=device-width, initial-scale=1.0"/>   
        <script src="js/jquery-3.1.1.min.js"> </script>
        <script src="js/search.js"> </script> 
        <script src="js/bootstrap.min.js" ></script>
        <link href="css/main.css" rel="stylesheet">
        <link href="css/bootstrap.css" rel="stylesheet">
        <link rel="icon" type="image/png" href="corn.png" />
    </head>
    <body>
        <div class="row" style="padding-left: 30px;">
                <input id="search-input" type="text" placeholder="Enter your game" required autofocus/>
                <input id="steamid-input" type="text" placeholder="Enter your Steam ID"/>
                <button id="search-get" type="button" onClick='onSearchClick()'> Click to get game </button>
        </div>
        <div class="row" style="padding-left: 30px;">
                <input id="addgame-input" type="text" placeholder="Enter new game id"/>
                <button id="game-post" type="button" onClick='onGamePostClick()'> Click to send game </button>
        </div>
        <div class="row">
            <div id="correlated-game"></div>
        </div>
        <div class="row">
                <div id="search-container" >
                    <div id="search-results">
                    </div>
                </div>
        </div>
    </body>
</html>