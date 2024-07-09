#include <string>
#include <iostream>
using namespace std;

class Player private : int playerID;
string playerName;
int playedMatches;
int playerScore;

public:
Player(int id, string name, int score)
{
    playerID = id;
    playerName = name;
    playerScore = score;
}

Player(int id, string name, int maches, int score)
{
    playerID = id;
    playerName = name;
    playerScore = score;
    playedMatches = maches;
}
int getPlayerID()
{
    return playerID;
}

string getPlayerName()
{
    return playerName;
}

int getPlayedMatches()
{
    return playedMatches;
}

int getPlayerScore()
{
    return playerScore;
}

void displayThreeArgument()
{
    cout << "Player ID : " << playerID << endl;
    cout << "Player Name : " << playerName << endl;
    cout << "Player Score : " << playerScore << endl;
}

void displayFourArgument()
{
    cout << "Player ID : " << playerID << endl;
    cout << "Player Name : " << playerName << endl;
    cout << "Played Matches : " << getPlayedMatches() << endl;
    cout << "Player Score: " << getPlayerScore() << endl;
}

~Player()
{
    std::cout << "Destructor Called" << std::endl;
}
}
;
int main()
{
    Player player1(1001, "John", 130);
    Player player2(1002, "Raj", 100, 5000);

    player1.displayThreeArgument();
    player2.displayFourArgument();
    return 0;
}