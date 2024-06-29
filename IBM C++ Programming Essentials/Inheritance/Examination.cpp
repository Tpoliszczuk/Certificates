#include <iostream>
using namespace std;

class Examination
{
protected:
    int passMark = 100;

public:
    void setPassMark(int pMark)
    {
        passMark = pMark;
    }

    int getPassMark()
    {
        return passMark;
    }

    void displayResult(int gradePoint)
    {
        if (gradePoint > passMark)
        {
            cout << "Result: Pass" << endl;
        }
        else
        {
            cout << "Result: Fail" << endl;
        }
        cout << "Grade points: " << gradePoint << endl;
    }
};

class ScienceExam : public Examination
{
public:
    int calculateGradePoints(int mark)
    {
        // Credit points for Science is always 2
        int creditPoints = 2;
        return creditPoints * mark;
    }
};

class MathsExam : public Examination
{
public:
    int calculateGradePoints(int mark)
    {
        // Credit points for Maths is always 4
        int creditPoints = 4;
        return creditPoints * mark;
    }
};

int main()
{
    int smark, mathmark;

    cout << "Enter the mark in Science: ";
    cin >> smark;

    cout << "Enter the mark in Maths: ";
    cin >> mathmark;

    ScienceExam scienceExam;
    MathsExam mathsExam;

    cout << "Science:" << endl;
    int scienceGradePoints = scienceExam.calculateGradePoints(smark);
    scienceExam.displayResult(scienceGradePoints);

    cout << endl
         << "Maths:" << endl;
    int mathsGradePoints = mathsExam.calculateGradePoints(mathmark);
    mathsExam.displayResult(mathsGradePoints);

    return 0;
}
