#include <iostream>
using namespace std;

struct stPiggyBankContent
{
    int Pennies;
    int Nickels;
    int Dimes;
    int Quarters;
    int Dollars;
};

stPiggyBankContent ReadPiggyBankContent()
{
    stPiggyBankContent PiggyBank;

    cout << "Enter Pennies: ";
    cin >> PiggyBank.Pennies;

    cout << "Enter Nickels: ";
    cin >> PiggyBank.Nickels;

    cout << "Enter Dimes: ";
    cin >> PiggyBank.Dimes;

    cout << "Enter Quarters: ";
    cin >> PiggyBank.Quarters;

    cout << "Enter Dollars: ";
    cin >> PiggyBank.Dollars;

    return PiggyBank;
}

int CalculateTotalPennies(stPiggyBankContent PiggyBank)
{
    return PiggyBank.Pennies * 1
        + PiggyBank.Nickels * 5
        + PiggyBank.Dimes * 10
        + PiggyBank.Quarters * 25
        + PiggyBank.Dollars * 100;
}

double CalculateTotalDollars(stPiggyBankContent PiggyBank)
{
    return (double)CalculateTotalPennies(PiggyBank) / 100;
}

void PrintTotals(stPiggyBankContent PiggyBank)
{
    cout << "\nTotal Pennies = "
        << CalculateTotalPennies(PiggyBank) << endl;

    cout << "Total Dollars = $"
        << CalculateTotalDollars(PiggyBank) << endl;
}

int main()
{
    stPiggyBankContent PiggyBank = ReadPiggyBankContent();

    PrintTotals(PiggyBank);

    return 0;
}
