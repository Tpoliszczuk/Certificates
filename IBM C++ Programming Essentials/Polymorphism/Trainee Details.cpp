#include <iostream>
using namespace std;

class Person
{
protected:
    string socialSecurityNumber;

public:
    void setSocialSecurityNumber(string ssn)
    {
        socialSecurityNumber = ssn;
    }

    string getSocialSecurityNumber() const
    {
        return socialSecurityNumber;
    }
};

class Student : virtual public Person
{
protected:
    int studentId;

public:
    void setStudentId(int id)
    {
        studentId = id;
    }

    int getStudentId() const
    {
        return studentId;
    }
};

class Employee : virtual public Person
{
protected:
    int employeeId;

public:
    void setEmployeeId(int id)
    {
        employeeId = id;
    }

    int getEmployeeId() const
    {
        return employeeId;
    }
};

class Trainee : public Student, public Employee
{
private:
    int traineeId;

public:
    void setTraineeId(int id)
    {
        traineeId = id;
    }

    int getTraineeId() const
    {
        return traineeId;
    }
};

int main()
{
    string ssn;
    int id;
    Trainee trainee;

    cout << "Enter Trainee ID:";
    cin >> id;
    trainee.setTraineeId(id);

    cout << "Enter SSN Number:";
    cin >> ssn;
    trainee.setSocialSecurityNumber(ssn);

    // Output the entered values
    cout << "\nTrainee ID: " << trainee.getTraineeId() << endl;
    cout << "Social Security Number: " << trainee.getSocialSecurityNumber() << endl;

    return 0;
}
