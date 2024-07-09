#include <iostream>
#include <stdexcept>
using namespace std;

bool findMiddle(int num) {
    // Extract digits
    int firstDigit = num / 100;
    int middleDigit = (num / 10) % 10;
    int lastDigit = num % 10;
    
    // Check if middle digit is 5 or 7
    if (middleDigit == 5 || middleDigit == 7) {
        return true;
    } else {
        throw runtime_error("Not a lucky code");
    }
}

int main() {
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    
    try {
        bool isLucky = findMiddle(num);
        if (isLucky) {
            cout << num << " is a lucky code" << endl;
        }
    } catch(exception &e) {
        cerr << e.what() << endl;
    }
    
    return 0;
}