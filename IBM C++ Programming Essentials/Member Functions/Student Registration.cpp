#include <iostream>
using namespace std;

class Student
{
private:
    int studentId;
    string name;
    int departmentId;
    string gender;
    string phoneNumber;

public:
    int getStudentId()
    {
        return studentId;
    }

    string getName()
    {
        return name;
    }
    int getDepartmentId()
    {
        return departmentId;
    }
    string getGender()
    {
        return gender;
    }
    string getPhoneNumber()
    {
        return phoneNumber;
    }

    void setStudentId(int id)
    {
        studentId = id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setDepartmentId(int deptId)
    {
        departmentId = deptId;
    }
    void setGender(string gender)
    {
        this->gender = gender;
    }
    void setPhoneNumber(string phNo)
    {
        phoneNumber = phNo;
    }
};
int main()
{

    int id, deptId;
    string name, gender, phNo;
    cout << "Enter the details:" << endl;
    cout << "Student Id" << endl;
    cin >> id;
    cout << "Student Name" << endl;
    cin >> name;
    cout << "Department Id" << endl;
    cin >> deptId;
    cout << "Gender" << endl;
    cin >> gender;
    cout << "Phone Number" << endl;
    cin >> phNo;

    Student s;

    s.setStudentId(id);
    s.setName(name);
    s.setGender(gender);
    s.setPhoneNumber(phNo);
    s.setDepartmentId(deptId);

    std::cout << "Student details entered:" << std::endl;
    std::cout << s.getStudentId() << " " << s.getName() << " " << s.getDepartmentId() << " " << s.getGender() << " " << s.getPhoneNumber() << std::endl;
    return 0;
}
