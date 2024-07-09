#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
    static int count;
    int employeeId;
    string employeeName;
    double salary;
    double netSalary;

public:
    void setEmployeeId(int id)
    {
        employeeId = id;
    }
    int getEmployeeId()
    {
        return employeeId;
    }
    void setEmployeeName(string name)
    {
        this->employeeName = name;
    }
    string getEmployeeName()
    {
        return this->employeeName;
    }
    void setSalary(double sal)
    {
        this->salary = sal;
    }
    double getSalary()
    {
        return this->salary;
    }
    void setNetSalary(double netSal)
    {
        this->netSalary = netSal;
    }
    double getNetSalary()
    {
        return this->netSalary;
    }
    void calculateNetSalary(int pfpercentage)
    {
        double pfammout = (salary * pfpercentage / 100);
        netSalary = salary - pfammout;
    }
    void display()
    {
        cout << "Id: " << employeeId << endl;
        cout << "Name: " << employeeName << endl;
        cout << "Net Salary (In dollars): " << netSalary << endl;
    }
    void getEmployeeDetails()
    {

        employeeId = generateEmployeeId();
        cout << "Enter Name:";
        cin >> employeeName;
        cout << "Enter salary (In dollars):";
        cin >> salary;
    }
    static int generateEmployeeId()
    {

        count++;

        return count;
    }
};
int Employee::count = 99;

int main()
{

    Employee pracownik;

    pracownik.getEmployeeDetails();

    int pfpercentage;
    cout << "Enter PF percentage:" << endl;
    cin >> pfpercentage;

    pracownik.calculateNetSalary(pfpercentage);

    pracownik.display();

    return 0;
}