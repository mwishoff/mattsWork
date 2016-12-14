require 'rest-client'
require 'json'

puts "starting all user's game scraping"
# steam_api_key = "CFB83BCDC65DB4325A005DDD4B0E7A35"
steam_api_key = "CA7E9BC06074ABB4140F272A126FF7B0"
result = [];
#Given a steamID in the format STEAM_X:Y:Z
#To generate steam64 id, for use in steam API, we must use the formula
#W = Z*2 + V + Y
#where Z = ID number for the account, V is a constant 0x0110000100000000
#and Y is either 0 or 1

#Captures ^C so that we can exit and save the file to the desktop
Signal.trap("INT") { 
	File.open("WebCrawler/all_user_game_list.json", 'a+') do |file|
		file.puts result.to_json
	end
	shut_down 
	exit
}

#Does the above calculation and make an API call to get a random user's games
#Then saves it to the result array and sleep to avoid spamming
y = 0
v = 0x0110000100000000
#70000000
(203001..208000).each do |z|
	w = z*2+v+y
	puts w
	request = RestClient.get "http://api.steampowered.com/IPlayerService/GetOwnedGames/v0001/?key=#{steam_api_key}&steamid=#{w}&format=json&include_appinfo=1"
	result.push(JSON.parse(request))
	sleep(1)
end

File.open("WebCrawler/all_user_game_list.json", 'a+') do |file|
	file.puts result.to_json
end

puts "finishing all user's game scraping"