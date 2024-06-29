#include <iostream>
using namespace std;

class Employee
{
private:
    int associateId;
    string associateName;
    string workStatus;

public:
    int getAssociateId()
    {
        return associateId;
    }

    string getAssociateName()
    {
        return associateName;
    }
    string getWorkStatus()
    {
        return workStatus;
    }

    void setAssociateId(int id)
    {
        associateId = id;
    }
    void setWorkStatus(string status)
    {
        workStatus = status;
    }
    void setAssociateName(string name)
    {
        associateName = name;
    }

    void updateStatusDetails(int days)
    {
        if (days <= 20)
            setWorkStatus("Core skills");
        else if (days > 20 && days <= 40)
            setWorkStatus("Advanced skills");
        else if (days > 40)
            setWorkStatus("Project phase");
    }
};

int main()
{

    int id;
    string name;
    int days;
    cout << "Enter the associate id:";
    cin >> id;
    cout << "Enter the associate name:";
    cin >> name;
    cout << "Enter the number of days:";
    cin >> days;

    Employee e1;
    e1.setAssociateId(id);
    e1.setAssociateName(name);
    e1.updateStatusDetails(days);

    std::cout << "The associate " << e1.getAssociateName() << "'s works status : " << e1.getWorkStatus() << std::endl;

    return 0;
}
