//Diego Cuevas
/*This program shows the multiplication tables. The programs must shows a menu
with the tables, the user must choose which table he wants to be printed on
the screen, the user can also choose up to what number the table will be
displayed, for example the table of 5 up to number 20. At the end of displaying
the table, the user can choose whether to return to the menu or end the 
program. If, while or do while and for are used.*/
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    int number = 0, n = 0;
    char exit = 'N';

    do
    {
        cout << "\t\tMultiplication tables...\n" << endl;
        cout << "Enter the number of table do you want(1, 2, ..., 10): ";
        cin >> number;
        cout << "Enter up to what number: ";
        cin >> n;

        for (int i = 1; i <= n; i++)
        {
            cout << number << " x " << i << " = " << number*i << endl;
        }

        cout << "Do you want exit?(Y/N): ";
        cin >> exit;
        cout << exit << endl;
    } while (exit == 'N' || exit == 'n');
    

    return 0;
}
