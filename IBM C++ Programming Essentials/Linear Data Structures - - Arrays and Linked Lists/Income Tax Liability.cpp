#include <iostream>
using namespace std;

int main()
{
    int num_sources;

    cout << "Enter the no. of income sources:";
    cin >> num_sources;

    if (num_sources <= 0)
    {
        cout << "Not liable to pay income tax" << endl;
        return 0;
    }

    int taxable_count = 0;
    double income;

    cout << "\n Enter the income from various sources:" << endl;
    for (int i = 0; i < num_sources; ++i)
    {
        cin >> income;
        if (income > 9950)
        {
            taxable_count++;
        }
    }

    if (taxable_count > 0)
    {
        cout << "No. of taxable income(s): " << taxable_count << endl;
    }
    else
    {
        cout << "Not liable to pay income tax" << endl;
    }

    return 0;
}
