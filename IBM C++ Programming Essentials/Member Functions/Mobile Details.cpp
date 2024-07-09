
#include <iostream>
using namespace std;

class Mobile
{

private:
    string mobileBrand;
    string mobileModelName;
    double mobilePrice;

public:
    // Getters
    string getMobileBrand()
    {
        return mobileBrand;
    }

    string getMobileModelName()
    {
        return mobileModelName;
    }

    double getMobilePrice()
    {
        return mobilePrice;
    }

    // Setters
    void setMobileBrand(string brand)
    {
        mobileBrand = brand;
    }

    void setMobileModelName(string model)
    {
        mobileModelName = model;
    }

    void setMobilePrice(double price)
    {
        mobilePrice = price;
    }
};

int main()
{

    Mobile telefon;
    string brand, model;
    double price;
    cout << "Enter the mobile brand:" << endl;
    cin >> brand;
    cout << "Enter the mobile model name:" << endl;
    cin >> model;
    cout << "Enter the mobile price:" << endl;
    cin >> price;

    telefon.setMobilePrice(price);
    telefon.setMobileModelName(model);
    telefon.setMobileBrand(brand);

    std::cout << "Mobile Details" << std::endl;
    std::cout << "Mobile Brand: " << telefon.getMobileBrand() << std::endl;
    std::cout << "Mobile Model Name: " << telefon.getMobileModelName() << std::endl;
    std::cout << "Mobile Price: " << telefon.getMobilePrice() << std::endl;

    return 0;
}