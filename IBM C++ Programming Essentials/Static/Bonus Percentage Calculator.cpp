#include <iostream>
#include <string>
using namespace std;

class Company
{
private:
    static string companyName;
    static string address;
    static long int contactNumber;

public:
    static void displayCompanyDetails();
    static string getCompanyName()
    {
        return companyName;
    }
    static string getAddress()
    {
        return address;
    }
    static long int getContactNumber()
    {
        return contactNumber;
    }
    static void setCompanyName(string cname)
    {
        companyName = cname;
    }
    static void setAddress(string add)
    {
        address = add;
    }
    static void setContactNumber(long int cnumber)
    {
        contactNumber = cnumber;
    }
};

// Initialize static variables of Company
string Company::companyName = "TekSoft";
string Company::address = "LosAngeles";
long int Company::contactNumber = 422245673;

void Company::displayCompanyDetails()
{
    cout << "Company Name:" << companyName << endl;
    cout << "Address:" << address << endl;
    cout << "Contact Number:" << contactNumber << endl;
}

class Employee
{
private:
    string empName;
    int empId;
    double netSalary;
    Company cObj;

public:
    void getEmployeeDetails();
    int calculateBonusPercentage();
    void displayEmployeeDetails();
    void setEmpName(string name)
    {
        empName = name;
    }
    void setEmpId(int id)
    {
        empId = id;
    }
    void setNetSalary(double net)
    {
        netSalary = net;
    }
    void setCobj(Company c)
    {
        cObj = c;
    }
    Company getCobj()
    {
        return cObj;
    }
};

void Employee::getEmployeeDetails()
{
    cout << "Enter Employee Name:" << endl;
    cin >> empName;
    cout << "Enter Employee ID:" << endl;
    cin >> empId;
    cout << "Enter Net Salary (In dollars):" << endl;
    cin >> netSalary;
}

int Employee::calculateBonusPercentage()
{
    int bonus;
    if (netSalary > 50000 && netSalary <= 80000)
        bonus = 5;
    else if (netSalary > 30000 && netSalary <= 50000)
        bonus = 10;
    else if (netSalary > 10000 && netSalary <= 30000)
        bonus = 15;
    else
        bonus = 20;
    return bonus;
}

void Employee::displayEmployeeDetails()
{
    cout << "Company Name:" << cObj.getCompanyName() << endl;
    cout << "Address:" << cObj.getAddress() << endl;
    cout << "Contact Number:" << cObj.getContactNumber() << endl;
    cout << "Employee Name:" << empName << endl;
    cout << "Employee ID:" << empId << endl;
    cout << "Employee Net Salary (In dollars):" << netSalary << endl;
    cout << "Employee Bonus Percentage:" << calculateBonusPercentage() << "%" << endl;
}

int main()
{
    Employee employ;

    employ.getEmployeeDetails();
    employ.displayEmployeeDetails();

    return 0;
}
