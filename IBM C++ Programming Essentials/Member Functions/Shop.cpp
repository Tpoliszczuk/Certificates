#include <iostream>
using namespace std;

class Shop
{

private:
    string itemName;
    int itemQuantity;
    double itemPrice;

public:
    string getItemName()
    {
        return itemName;
    }
    int getItemQuantity()
    {
        return itemQuantity;
    }
    double getItemPrice()
    {
        return itemPrice;
    }
    void setItemName(string name)
    {
        itemName = name;
    }
    void setItemQuantity(int quantity)
    {
        itemQuantity = quantity;
    }
    void setItemPrice(double price)
    {
        itemPrice = price;
    }
};

int main()

    string name;
int quantity;
double price;
cout << "Enter the item name:" << endl;
cin >> name;
cout << "Enter the item quantity:" << endl;
cin >> quantity;
cout << "Enter the item price:" << endl;
cin >> price;

Shop item;
item.setItemPrice(price);
item.setItemQuantity(quantity);
item.setItemName(name);

std::cout << "Item Name:" << item.getItemName() << std::endl;
std::cout << "Item Quantityy:" << item.getItemQuantity() << std::endl;
std::cout << "Item Price:" << item.getItemPrice() << std::endl;

return 0;
}