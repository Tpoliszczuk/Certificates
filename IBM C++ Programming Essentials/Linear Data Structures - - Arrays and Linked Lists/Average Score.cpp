#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int num_assignments;
    cout << "Enter no. of assignments:\n";
    cin >> num_assignments;

    if (num_assignments > 10)
    {
        cout << "No. of assignments must not be more than 10" << endl;
        return 0;
    }

    float total_score = 0.0;
    cout << "Enter the scores:" << endl;
    for (int i = 0; i < num_assignments; i++)
    {
        float score;
        cin >> score;
        total_score += score;
    }

    float average_score = total_score / num_assignments;

    cout << "The average score is " << fixed << setprecision(2) << average_score << endl;

    if (average_score >= 80.0)
    {
        cout << "Eligible for projects" << endl;
    }
    else
    {
        cout << "Not eligible for projects" << endl;
    }

    return 0;
}
