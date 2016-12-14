// When Enter Key is pressed, search!
$(document).keypress(function(event){
    if(event.keyCode === 13) {
        onSearchClick();
    }
});

// Correlation Header div 
function addCorrelationHeader(){
	return '<div class="col-lg-12 col-med-12 col-sm-12 col-xs-12"><b>Highly Correlated Game: </b></div>';
}

// Search Results Header div
function addResultsHeader(){
	return '<div class="col-lg-12 col-med-12 col-sm-12 col-xs-12"><b>Query Results: </b></div>';
}

// Function to format data into html
function resultsFormat(id, title, rating){
	var bootstrapClasses = "col-lg-3 col-med-4 col-sm-6 col-xs-12";
	return '<div id="'+ id + 
		'" class="results '+ bootstrapClasses +
		'"><div class="result_content"><a href="http://store.steampowered.com/app/'+ id +
		'/" target="_blank"><div class="result_image"><img src="http://cdn.akamai.steamstatic.com/steam/apps/' + id +
		'/header.jpg" /></div><div class="result_data"><div class="title"<b>Title:</b> ' + title +
		'  </div><b>Rating:</b> '+ rating +'</div></a></div></div>';
}

/* onSearchClick makes an AJAX call to the backend 
	to get search results
*/
function onSearchClick() {
	if($('#search-input').val() !== "") {
		let searchTerm = $('#search-input').val();
		let steamId = $('#steamid-input').val();
		$.ajax({
			type:'POST',
			data: {
				"searchTerm": searchTerm,
				"steamID": steamId
			},
			url: "game_search.php",
			success: onSearchCallback,
			error: function(xhr, err, errThrown) {
				console.log("I failed");
				console.log(err);
				console.log(errThrown);
			},
		});
	}
}

/* This function picks the results to be displayed and append the html to the page
*/
function onSearchCallback(e) {
	correlated = JSON.parse(e)["correlated"];
	resultsJSON = JSON.parse(e)["results"];

	var resultArray = [];
	
	for(var i in resultsJSON){
		var data = resultsJSON[i];
		var min = (data.length >= 5)? 5 : data.length;
		var randomIndex = shuffle(Array.apply(null, {length: data.length}).map(Number.call, Number));
		for(var j = 0; j < min; j++){
			// var gameIndex = Math.floor(data.length * Math.random());
			resultArray.push(data[randomIndex[j]]);
		}
	}

	resultArray.sort(sortByScore);
	displayToHtml(resultArray, correlated);

	bindClicks();
}

//Utilizes the Fisher-Yates shuffle, shuffling the array around in a random order
//and then returning the randomly shuffled array
function shuffle(array) {
    var i = array.length,
        j = 0,
        temp;

    while (i--) {

        j = Math.floor(Math.random() * (i+1));

        // swap randomly chosen element with current element
        temp = array[i];
        array[i] = array[j];
        array[j] = temp;

    }

    return array;
}

//Format the results into html and display it to screen
function displayToHtml(resultArray, correlated) {
	var htmlstuff = "";

	for(var k in resultArray){
		for(var title in resultArray[k]) 
			htmlstuff += resultsFormat(resultArray[k][title]["id"], title, resultArray[k][title]["score"]);
	}
	htmlstuff = addResultsHeader() + htmlstuff;
	$("#search-container").find("#search-results").html(htmlstuff);
	htmlstuff = "";

	if(correlated["null_value"] !== null){
		var key = Object.keys(correlated)[0];
		htmlstuff = addCorrelationHeader() + resultsFormat(correlated[key]["id"], key, correlated[key]["score"]);
		$("#correlated-game").html(htmlstuff);
	} else {
		$("#correlated-game").empty();
	}
}

// function to sort results by score.
function sortByScore(a, b) {
	var aKey = Object.keys(a)[0];
	var bKey = Object.keys(b)[0];

	if(a[aKey]["score"] < b[bKey]["score"]) {
		return 1;
	} else if (a[aKey]["score"] > b[bKey]["score"]) {
		return -1;
	} else {
		return 0;
	}
}

// function to bind a click listener to the results div. 
function bindClicks(){
	$("#search-container").unbind("click");
	$("#search-container").on("click", ".results", function(){
		var id = $(this).get(0).id;
		// add click to id in JSON
		var gameIdList = [];
		$("#search-container").find(".results").each(function(i, item){
			gameIdList.push(item.id);
		});
		/* make an AJAX call to run click counter.
		*/
		$.ajax({
			type:'POST',
			data:{
				"gameId": id,
				"gameIdList": gameIdList
			},
			url: "game_clicks.php",
			success: function(e) {
				console.log(e);
				console.log("Success");
			},
			error: function(xhr, err, errThrown) {
				console.log("I failed");
				console.log(xhr);
				console.log(err);
				console.log(errThrown);
			},
		});
		console.log(id);
	});
}

/*	makes an AJAX call to add a new game to our index. 
*/
function onGamePostClick() {
	if($('#addgame-input').val() !== "") {
		let newGame = $('#addgame-input').val();
		$.ajax({
			type:'POST',
			data: {
				"newGame": newGame
			},
			url: "game_post.php",
			success: function(e) {
				console.log(e);
			},
			error: function(xhr, err, errThrown) {
				console.log("I failed");
				console.log(err);
				console.log(errThrown);
			},
		});
	}
}