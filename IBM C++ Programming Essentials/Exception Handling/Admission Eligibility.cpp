#include <iostream>
using namespace std;

double eligibility_ForAdmission(int phyMarks, int chemMarks, int mathMarks) {
    if (phyMarks < 60 || chemMarks < 60 || mathMarks < 60) {
        throw "Not eligible for Admission";
    }
    
    int totalScore = phyMarks + chemMarks + mathMarks;
    if (totalScore >= 180) {
        return totalScore;
    } else {
        throw "Not eligible for Admission";
    }
}

int main() {
    int phyMarks, chemMarks, mathMarks;

    cout << "Enter the Physics Marks" << endl;
    cin >> phyMarks;

    cout << "Enter the Chemistry Marks" << endl;
    cin >> chemMarks;

    cout << "Enter the Maths Marks" << endl;
    cin >> mathMarks;

    try {
        double total = eligibility_ForAdmission(phyMarks, chemMarks, mathMarks);
        cout << "Total score is " << total << endl;
    } catch(const char* msg) {
        cerr << msg << endl;
    }

    return 0;
}
