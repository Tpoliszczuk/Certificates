#include <iostream>
using namespace std;

class Train
{
private:
    long passengerPhone;
    string passengerName;
    char gender;
    int age;
    double ticketPrice;

public:
    long getPassengerPhone()
    {
        return passengerPhone;
    }
    string getPassengerName()
    {
        return passengerName;
    }
    char getGender()
    {
        return gender;
    }
    int getAge()
    {
        return age;
    }
    double getTicketPrice()
    {
        return ticketPrice;
    }
    void setPassengerPhone(long pPhone)
    {
        passengerPhone = pPhone;
    }
    void setPassengerName(string pName)
    {
        passengerName = pName;
    }
    void setGender(char pGender)
    {
        gender = pGender;
    }
    void setAge(int pAge)
    {
        age = pAge;
    }
    void setTicketPrice(double tPrice)
    {
        ticketPrice = tPrice;
    }

    double calculateAmount()
    {
        double total = ticketPrice;
        if (age < 16)
            total = total * 0.5;
        else if (age >= 60)
            total = total * 0.75;
        else if (gender == 'F')
            total = total * 0.9;
        return total;
    }
};

int main()
{

    long phone;
    string name;
    char gender;
    int age;
    double ticketPrice;

    Train passager;

    cout << "Enter the Passenger phone no : ";
    cin >> phone;
    cout << "Enter the Passenger name : ";
    cin >> name;
    cout << "Enter the Passenger Age : ";
    cin >> age;
    cout << "Enter the Gender(M/F): ";
    cin >> gender;
    cout << "Enter the Ticket Price: ";
    cin >> ticketPrice;

    passager.setAge(age);
    passager.setTicketPrice(ticketPrice);
    passager.setGender(gender);
    passager.setPassengerName(name);
    passager.setPassengerPhone(phone);

    cout << "Total Amount(In dollars): " << passager.calculateAmount() << endl;

    return 0;
}
