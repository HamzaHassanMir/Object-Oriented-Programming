#include<iostream>
#include<string>

using namespace std;

class Player
{
protected:
	string playerName;
	int baseScore;

public:
	Player(string pn, int score)
	{
		playerName = pn;
		baseScore = score;
		cout << "Player Constructor called for " << playerName << endl;
	}

	void playerDetails()
	{
		cout << "Player Name " << playerName << ", Base Score: " << baseScore << endl;
	}
};

class StrategicPlayer :public Player
{
protected:
	int skill_level;
	string strategy_type;
public:
	StrategicPlayer(string pn, int score, int sl, string st) :Player(pn , score)
	{
		skill_level = sl;
		strategy_type = st;
		cout << "Strategic Player Constructor called for " << playerName << endl;
	}

	void strategicPlayerDetails()
	{
		cout << "Skill level: " << skill_level << ", Strategy Type: " << strategy_type << endl;
	}
};

class CompetitivePlayer :public StrategicPlayer
{
private:
	int effectiveScore;
public:
	CompetitivePlayer(string pn, int score, int sl, string st) :StrategicPlayer(pn ,score , sl, st)
	{
		effectiveScore = baseScore + (skill_level * 10);
		cout << "Competitive Player Constructor called for " << playerName << endl;
	}
	void displayCompetitivePlayer() 
	{
		strategicPlayerDetails();
		cout << "Effective Score: " << effectiveScore << endl;
	}
};

int main()
{
	cout << "Creating CompetitivePlayer Object:" << endl;
	CompetitivePlayer player("Ali", 50, 7, "minimax");

	cout << "\n Displaying CompetitivePlayer Details:" << endl;
	player.displayCompetitivePlayer();

	system("pause");
	return 0;
}