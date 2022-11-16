//Diego Cuevas
/*This program calculate the salary increase for a worker according to his
category. Category 1) +15%, 2) +10%, 3) +8% y 4) +7%.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int category;
    float salary, increase;

    cout << "Enter the worker category: ";
    cin >> category;
    cout << "Enter the worker salary: $";
    cin >> salary;

    switch (category)
    {
    case 1:
        increase = salary*.15;
        salary += increase;
        cout << "The worker is category " << category << "." << endl;
        cout << "The salary is $" << salary - increase << " and have an increase of 15%." << endl;
        cout << "The final salary is: $" << salary << endl;
        break;
    case 2:
        increase = salary*.1;
        salary += increase;
        cout << "The worker is category " << category << "." << endl;
        cout << "The salary is $" << salary - increase << " and have an increase of 10%." << endl;
        cout << "The final salary is: $" << salary << endl;
        break;
    case 3:
        increase = salary*.08;
        salary += increase;
        cout << "The worker is category " << category << "." << endl;
        cout << "The salary is $" << salary - increase << " and have an increase of 8%." << endl;
        cout << "The final salary is: $" << salary << endl;
        break;
    case 4:
        increase = salary*.07;
        salary += increase;
        cout << "The worker is category " << category << "." << endl;
        cout << "The salary is $" << salary - increase << " and have an increase of 7%." << endl;
        cout << "The final salary is: $" << salary << endl;
        break;
    default:
        cout << "This category doesn't exist.";
        break;
    }
    
    return 0;
}
