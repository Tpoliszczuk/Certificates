#include <iostream>
using namespace std;

class Product
{
protected:
    int markedPrice = 1000;
    int discount = 40;

public:
    void setMarkedPrice(int mPrice)
    {
        markedPrice = mPrice;
    }
    void setDiscount(int dis)
    {
        discount = dis;
    }
    int getMarkedPrice()
    {
        return markedPrice;
    }
    int getDiscount()
    {
        return discount;
    }
};

class Dress : public Product
{
public:
    char findSize(int chestSize)
    {
        if (chestSize >= 20 && chestSize <= 30)
        {
            return 'S';
        }
        if (chestSize >= 31 && chestSize <= 40)
        {
            return 'M';
        }
        if (chestSize >= 41)
        {
            return 'L';
        }
    }
};
class Shirt : public Dress
{
public:
    int calculatePrice(char chestSize)
    {
        int price = 0;
        if (findSize(chestSize) == 'L')
        {
            price = getMarkedPrice() - (getMarkedPrice() * getDiscount()) / 100 + 1000;
        }
        else if (findSize(chestSize) == 'M')
        {
            price = getMarkedPrice() - (getMarkedPrice() * getDiscount()) / 100 + 500;
        }
        else if (findSize(chestSize) == 'S')
        {
            price = getMarkedPrice() - (getMarkedPrice() * getDiscount()) / 100;
        }
        return price;
    }
};

// main function
int main()
{
    Shirt obj1;
    int size;
    cout << "Enter the chest size : ";
    cin >> size;
    std::cout << "Dress Size : " << obj1.findSize(size) << std::endl;
    std::cout << "Price (in $) : " << obj1.calculatePrice(size) << std::endl;
    return 0;
}