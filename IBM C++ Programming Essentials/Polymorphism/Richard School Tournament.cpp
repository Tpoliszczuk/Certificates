#include <iostream>
using namespace std;

int calculateScore(int sixers, int fours, int singles)
{
    return (sixers * 6) + (fours * 4) + singles;
}

int calculateScore(int whiteCoins, int blackCoins, bool red)
{
    int score = (whiteCoins * 2) + (blackCoins * 1);
    if (red)
    {
        score += 5;
    }
    return score;
}

int calculateScore(int goals, int fouls)
{
    return goals - fouls;
}

int main()
{
    int six, four, single, white, black, goals, fouls;
    bool red;

    cout << "CRICKET:" << endl;
    cout << "Enter number of sixers : ";
    cin >> six;
    cout << "Enter number of fours : ";
    cin >> four;
    cout << "Enter number of singles : ";
    cin >> single;
    int cricketScore = calculateScore(six, four, single);
    cout << "CALCULATED SCORE : " << cricketScore << endl;

    cout << endl
         << "CARROM:" << endl;
    cout << "Enter number of white coins pocket : ";
    cin >> white;
    cout << "Enter number of black coins pocket : ";
    cin >> black;
    cout << "Red Pocket(0/1): ";
    cin >> red;
    int carromScore = calculateScore(white, black, red);
    cout << "CALCULATED SCORE : " << carromScore << endl;

    cout << endl
         << "BASKETBALL:" << endl;
    cout << "Enter number of goals : ";
    cin >> goals;
    cout << "Enter number of fouls : ";
    cin >> fouls;
    int basketballScore = calculateScore(goals, fouls);
    cout << "CALCULATED SCORE : " << basketballScore << endl;

    return 0;
}
