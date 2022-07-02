//Diego Cuevas
/*This program where the user enters the daily salary of 10 employees, then
calculate how much each is paid per week, month and year, determine which is
the highest paid employee, and determine which is the lowest paid employee. At
the end print all the results on the screen.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int highest_employee = 0, lowest_employee = 0;
    float daily_salary[10] = {}, weekly_salary[10] = {}, monthly_salary[10] = {}, annual_salary[10] = {}, max = 0, min = 1000000000;

    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the daily salary for the " << i+1 << " employee: $";
        cin >> daily_salary[i];
        weekly_salary[i] = daily_salary[i]*6;
        monthly_salary[i] = weekly_salary[i]*4;
        annual_salary[i] = monthly_salary[i]*12;
        if (annual_salary[i] > max)
        {
            max = annual_salary[i];
            highest_employee = i;
        }
        if (annual_salary[i] < min)
        {
            min = annual_salary[i];
            lowest_employee = i;
        }
        
    }

    cout << "The employee with highest salary is employee " << highest_employee+1 << " with an annual salary of $" << annual_salary[highest_employee] << endl;
    cout << "The employee with lowest salary is employee " << lowest_employee+1 << " with an annual salary of $" << annual_salary[lowest_employee] << endl;
    
    return 0;
}
