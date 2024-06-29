#include <iostream>
#include <string>
using namespace std;

int calculateTotalReturns(int amount, int interestRate)
{
    return amount + ((amount * interestRate) / 100);
}

int calculateTotalReturns(int monthlyInvestment, int termInYears, int returnRate)
{
    int totalInvestment = monthlyInvestment * 12 * termInYears;
    return totalInvestment + ((totalInvestment * returnRate) / 100);
}

int calculateTotalReturns(string stockName, double stockPrice, int numberOfStocks)
{
    return static_cast<int>(stockPrice * numberOfStocks);
}

int main()
{
    int amount, rate;
    int depositAmount, term, rRate;
    string stockName;
    double stockPrice;
    int numberOfStocks;

    cout << "FD:" << endl;
    cout << "Enter Amount in US dollars: ";
    cin >> amount;
    cout << "Enter interest rate: ";
    cin >> rate;
    int fdReturns = calculateTotalReturns(amount, rate);

    cout << "\nMutual Funds:" << endl;
    cout << "Enter amount invested every month: ";
    cin >> depositAmount;
    cout << "Enter term in years: ";
    cin >> term;
    cout << "Enter return rate: ";
    cin >> rRate;
    int mfReturns = calculateTotalReturns(depositAmount, term, rRate);

    cout << "\nStock:" << endl;
    cout << "Enter stock name: ";
    cin.ignore();
    getline(cin, stockName);
    cout << "Enter stock price: ";
    cin >> stockPrice;
    cout << "Enter number of stocks: ";
    cin >> numberOfStocks;
    int stockReturns = calculateTotalReturns(stockName, stockPrice, numberOfStocks);

    cout << "\nTotal Returns (In US dollars):" << endl;
    cout << "FD: " << fdReturns << endl;
    cout << "Mutual Funds: " << mfReturns << endl;
    cout << "Stock: " << stockReturns << endl;

    return 0;
}
