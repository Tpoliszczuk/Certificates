#include <iostream>
#include <string>
using namespace std;
class College
{
private:
    static string principal_name; // principal_name is common for all the students
public:
    static void setPrincipalName(string name)
    {
        principal_name = name;
    }
    static string getPrincipalName()
    {
        return principal_name;
    }
};
string College::principal_name = "John";
// Initialize the static principal_name variable with value "John" here
class Student
{
private:
    int id;
    string name;
    float marks[5];
    float average;
    char grade;
    College cObj;

public:
    void getStudentDetails();
    float calculateAverage();
    char findGrade();
    void displayStudentDetails();

    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return id;
    }
    void setAverage(float average)
    {
        this->average = average;
    }
    int getAverage()
    {
        return average;
    }
    void setName(string n)
    {
        this->name = n;
    }
    string getName()
    {
        return name;
    }
    void setMarks(float m[])
    {
        for (int i = 0; i < 5; i++)
            this->marks[i] = m[i];
    }
    float *getMarks()
    {
        return marks;
    }
    void setGrade(char g)
    {
        grade = g;
    }
    char getGrade()
    {
        return grade;
    }
    College getCollegeObject()
    {
        return cObj;
    }
};

void Student::getStudentDetails()
{
    std::cout << "Enter Student ID :" << std::endl;
    std::cin >> id;
    std::cout << "Enter Student Name :" << std::endl;
    std::cin >> name;
    std::cout << "Enter the five subject marks" << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cin >> marks[i];
    }
}
float Student::calculateAverage()
{

    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum = sum + marks[i];
    }
    average = sum / 5;
    return average;
}

char Student::findGrade()
{
    average = calculateAverage();
    if (average <= 100 && average >= 80)
        grade = 'O';
    else if (average < 80 && average >= 50)
        grade = 'A';
    else
        grade = 'F';
    return grade;
}
void Student::displayStudentDetails()
{
    std::cout << "Student Name :" << name << std::endl;
    std::cout << "Student ID : " << id << std::endl;
    std::cout << "Principal Name : " << cObj.getPrincipalName() << std::endl;
    std::cout << "Average: " << calculateAverage() << std::endl;
    std::cout << "Grade : " << findGrade() << std::endl;
}
int main() // DO NOT change the 'main' signature
{
    Student s1;
    s1.getStudentDetails();
    s1.displayStudentDetails();
    return 0;
}