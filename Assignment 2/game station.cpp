#include <iostream>
#include <vector>
#include <string>

using namespace std;
class Player 
{
public:
	string name;
	int id;

	Player(string name, int id) : name(name), id(id) {}
};

class Game 
{
public:
	int id;
	string name;
	int level;

	Game(int id, string name, int level) : id(id), name(name), level(level) {}
};

int main() 
{
	vector<Player> players = 
	{
		Player("Player 1", 1),
		Player("Player 2", 2),
		Player("Player 3", 3),
		Player("Player 4", 4),
		Player("Player 5", 5)
	};

	vector<Game> games = 
	{
		Game(1, "Game 1", 1),
		Game(2, "Game 2", 2),
		Game(3, "Game 3", 3)
	};

	vector<vector<bool>> player_games(players.size(), vector<bool>(games.size(), false));
	player_games[0][2] = true;
	player_games[1][1] = true; 
	player_games[2][1] = true; 
	player_games[3][2] = true;

	cout << "Game played by Player 4:" << endl;
	for (int i = 0; i < games.size(); ++i) 
	{
		if (player_games[3][i]) 
		{
			cout << "Game ID: " << games[i].id << ", Name: " << games[i].name << ", Level: " << games[i].level << endl;
		}
	}
	cout << "Players in Game 2:" << endl;
	for (int i = 0; i < players.size(); ++i)
	{
		if (player_games[i][1])
		{
			cout << "Name: " << players[i].name << ", ID: " << players[i].id << endl;
		}
	}

	return 0;
}