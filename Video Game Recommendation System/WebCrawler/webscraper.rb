require 'nokogiri'
require 'rest-client'
require 'json'

#Check if there's any arguments in the command line
#if so, read from json file with list of steam game id's
if(ARGV.empty?)
	json_file = File.read('user_game_data.json')
	data_hash = JSON.parse(json_file)

	array_of_games = data_hash['response']['games']

	array_of_games.each do |game|
		game_name = game['name']
		game_id = game['appid']
		File.open("SteamScrapedData2/output-#{game_id}.html", 'w') do |file|
			file.puts RestClient.get "http://store.steampowered.com/app/#{game_id}/"
		end
	end
#else, make HTTP request using the user input
else
	game_id = ARGV[0]
	File.open("../NewGame/output-#{game_id}.html", 'w') do |file|
		file.puts RestClient.get "http://store.steampowered.com/app/#{game_id}/"
	end
end