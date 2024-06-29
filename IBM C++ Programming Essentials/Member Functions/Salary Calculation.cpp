#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    int employeeId;
    string employeeName;
    double salary;
    double netSalary;

public:
    int getEmployeeId()
    {
        return employeeId;
    }
    string getEmployeeName()
    {
        return employeeName;
    }
    double getSalary()
    {
        return salary;
    }
    double getNetSalary()
    {
        return netSalary;
    }
    void setEmployeeId(int id)
    {
        employeeId = id;
    }
    void setEmployeeName(string name)
    {
        employeeName = name;
    }
    void setSalary(double sal)
    {
        salary = sal;
    }
    void calculateNetSalary(double pf)
    {
        netSalary = salary - (salary * pf) / 100;
    }
};

int main()
{

    int id;
    string name;
    double sal;
    float pf;
    cout << "Enter Id:" << endl;
    cin >> id;
    cout << "Enter Name:" << endl;
    cin >> name;
    cout << "Enter salary:" << endl;
    cin >> sal;
    cout << "Enter PF percentage:" << endl;
    cin >> pf;

    Employee item;

    item.setSalary(sal);
    item.setEmployeeName(name);
    item.setEmployeeId(id);
    item.calculateNetSalary(pf);

    std::cout << "Id:" << item.getEmployeeId() << std::endl;
    std::cout << "Name:" << item.getEmployeeName() << std::endl;
    std::cout << "Salary:" << item.getSalary() << std::endl;
    std::cout << "Net Salary:" << item.getNetSalary() << std::endl;

    return 0;
}
