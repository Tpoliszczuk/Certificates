#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class MonthlyExpense
{

private:
    double household_exp;
    double medical;

public:
    void setHouseHoldExpense(double houseExp)
    {
        household_exp = houseExp;
    }

    void setMedicalExpense(double medical)
    {
        this->medical = medical;
    }

    double calculateNovemberMonthExpense()
    {

        return household_exp + medical;
    }

    double calculateDecemberMonthExpense()
    {

        return household_exp + medical;
    }

    double calculateTotalExpense()
    {
        return household_exp + medical;
    }

    MonthlyExpense operator+(const MonthlyExpense b)
    {
        MonthlyExpense expense;
        expense.household_exp = household_exp + b.household_exp;
        expense.medical = medical + b.medical;
        return expense;
    }
};

int main()
{
    MonthlyExpense budget1;
    MonthlyExpense budget2;
    MonthlyExpense budget3;

    double expenses = 0.0;
    double novHousHol1, novMedEx2, decHousHol1, decMedEx2;

    cout << "Enter the House hold expense of November(in $)  :";
    cin >> novHousHol1;
    cout << "Enter the Medical expense of November(in $)  :";
    cin >> novMedEx2;
    cout << "Enter the House hold expense of December(in $) :";
    cin >> decHousHol1;
    cout << "Enter the Medical expense of December(in $) :";
    cin >> decMedEx2;
    // Implement your code

    budget1.setHouseHoldExpense(novHousHol1);
    budget1.setMedicalExpense(novMedEx2);
    budget2.setHouseHoldExpense(decHousHol1);
    budget2.setMedicalExpense(decMedEx2);

    expenses = budget1.calculateNovemberMonthExpense();
    std::cout << "November Expenses (in $) : " << expenses << std::endl;

    expenses = budget2.calculateDecemberMonthExpense();
    std::cout << "December Expenses (in $) : " << expenses << std::endl;

    budget3 = budget1 + budget2;
    expenses = budget3.calculateTotalExpense();
    std::cout << "Total Expenses for the month of Nov and Dec (in $)  : " << expenses << std::endl;

    return 0;
}