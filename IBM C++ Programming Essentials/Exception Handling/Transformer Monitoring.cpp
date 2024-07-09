#include <iostream>
using namespace std;

string voltageTracker(float v1, float v2, float v3) 
{
    if ((v1 > 275) || (v2 > 275) || (v3 > 275)) 
    {
        throw "Danger Detected Over Voltage";
    }
    else if ((v1 > 250 && v1 <= 275) || (v2 > 250 && v2 <= 275) || (v3 > 250 && v3 <= 275)) 
    {
        return "Warning voltage limit";
    }
    else if ((v1 >= 240 && v1 <= 250) && (v2 >= 240 && v2 <= 250) && (v3 >= 240 && v3 <= 250)) 
    {
        return "Safe voltage limit";
    }
    return "Voltage values are out of defined ranges";
}

int main()
{
    float v1, v2, v3;
    cout << "Enter Line Voltage values:" << endl;
    cin >> v1;
    cin >> v2;
    cin >> v3;

    try 
    {
        string result = voltageTracker(v1, v2, v3);
        cout << result << endl;
    } 
    catch (const char* msg) 
    {
        cerr << msg << endl;
    }

    return 0;
}
