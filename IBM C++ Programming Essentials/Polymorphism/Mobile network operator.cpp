#include <iostream>
#include <string>
using namespace std;

class Customer
{
protected:
    string name;
    int units;
    string email;

public:
    void setName(string n)
    {
        name = n;
    }
    string getName()
    {
        return name;
    }
    void setEmail(string e)
    {
        email = e;
    }
    string getEmail()
    {
        return email;
    }
    void setUnits(int unit)
    {
        units = unit;
    }
    int getUnits()
    {
        return units;
    }
    virtual int calculateTariff()
    {
        return 0;
    }
};

class NormalCustomer : public Customer
{
public:
    int calculateTariff() override
    {
        return 0;
    }
};

class BrandCustomer : public Customer
{
public:
    int calculateTariff() override
    {
        return 100 + units * 2;
    }
};

class ExecutiveCustomer : public Customer
{
public:
    int calculateTariff() override
    {
        return units * 5;
    }
};

int main()
{
    // DO NOT change the 'main' signature
    string name;
    string email;
    int units;
    int type;

    cout << "Enter the name:" << endl;
    cin >> name;
    cout << "Enter the emailId:" << endl;
    cin >> email;
    cout << "Enter the units:" << endl;
    cin >> units;
    cout << "Enter customer type:" << endl;
    cin >> type;

    Customer *customer;

    if (type == 1)
    {
        customer = new NormalCustomer();
    }
    else if (type == 2)
    {
        customer = new BrandCustomer();
    }
    else if (type == 3)
    {
        customer = new ExecutiveCustomer();
    }

    customer->setUnits(units);

    cout << "Calculated Tariff(In US dollars): " << customer->calculateTariff() << endl;

    delete customer;

    return 0;
}
