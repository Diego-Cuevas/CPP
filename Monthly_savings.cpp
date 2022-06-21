//Diego Cuevas
/*This program calculate our monthly savings and determine if we can save
for a tv. Monthly expenses: house, food, clothes, car, gasoline, insurance.
Determine if you can save $200 each month for the tv only if you have at
least $300 available after pay monthly expenses.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    float income, savings, house, food, clothes, car, gasoline, insurance, total_expenses;

    cout << "Enter incomes: ";
    cin >> income;
    cout << "Enter house expense: ";
    cin >> house;
    cout << "Enter food expense: ";
    cin >> food;
    cout << "Enter clothes expense: ";
    cin >> clothes;
    cout << "Enter car expense: ";
    cin >> car;
    cout << "Enter gasoline expense: ";
    cin >> gasoline;
    cout << "Enter insurance expense: ";
    cin >> insurance;

    total_expenses = house + food + clothes + car + gasoline + insurance;
    savings = income - total_expenses;

    cout << "Incomes: $" << income << endl;
    cout << "Total expenses: $" << total_expenses << endl;
    cout << "Savings: $" << savings << endl;

    if (savings >= 300)
    {
        cout << "Congratulations! You can save $200 for the tv." << endl;
    }
    else
    {
        cout << "Ups! You can't save money this month for the tv." << endl;
    }
    
    return 0;
}
