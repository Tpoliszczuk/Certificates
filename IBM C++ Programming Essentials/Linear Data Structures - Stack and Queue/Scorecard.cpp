#include <iostream>
using namespace std;

int main()
{
    int numHurdles;
    cout << "Enter the no. of hurdles:";
    cin >> numHurdles;

    if (numHurdles <= 0 || numHurdles > 100)
    {
        cout << "Invalid no. of hurdles" << endl;
        return 0;
    }

    int hurdles[100];

    for (int i = 0; i < numHurdles; i++)
    {
        cout << "Enter the hurdle height " << i + 1 << ":";
        cin >> hurdles[i];
    }

    cout << "Latest hurdle race scores are:";
    int start = max(0, numHurdles - 5);
    for (int i = start; i < numHurdles; i++)
    {
        cout << " " << hurdles[i];
    }
    cout << endl;

    return 0;
}
