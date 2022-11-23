//Diego Cuevas
/*A company wants a small system that allow them
saves the data of twenty employees (ID an first 
name). ID's range from 1 to 20 but aren't entered
consecutively, users enter randomly. Once the data
is saved, the user have the follow options: a) Search
a employee name by ID. b) Search the ID by name.
c) Know if a employee doesn't exist. d)Know if there
are similar names. e) Show employees in ascendent
order by ID. f) Show employees in descending order
by ID. */
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int opt = 0, flag = 0;
    int id[20][3] = { 0 };
    char names[20][20];

    for (int i = 0; i < 5; i++)
    {
        id[i][0] = i; //Save index
        cout << "Employee " << i+1 << "\nEnter ID: ";
        cin >> id[i][1];
        cout << "Enter employee first name: ";
        cin >> names[i];
    }
    
    for (int i = 0; i < 4; i++) //Sort id's
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (id[j][1] > id[j + 1][1])
            {
                //Switch id
                id[j][1] += id[j+1][1];
                id[j+1][1] = id[j][1] - id[j+1][1];
                id[j][1] -= id[j+1][1];
                //Switch index
                id[j][0] += id[j+1][0];
                id[j+1][0] = id[j][0] - id[j+1][0];
                id[j][0] -= id[j+1][0];
                flag = 1;
            }

            flag = 0 ? i=9 : flag = 0;
            
        }
        
    }
    
    system("cls");

    do
    {
        cout << "1.- Search employee name by ID.\n2.- Search ID by name.\n3.- Know if a employee doesn't exist.\n4.- Know if there are similar names.\n5.- Show employees in ascending ID.\n6.- Show employees in descending ID.\n7.- Exit.\nEnter option: ";
        cin >> opt;
        
        switch (opt)
        {
        case 1: {
            int lower = 0, top = 5, center = 0, search = 0, flag = 0;

            cout << "Enter ID to search: ";
            cin >> search;

            while (lower <= top)
            {
                center = (lower + top) / 2;
                if (id[center][1] == search)
                {
                    flag = 1;
                    break;
                }
                else if (id[center][1] < search )
                {
                    lower = center + 1;
                }
                else
                {
                    top = center - 1;
                }
                
            }
            
            if (flag == 1)
            {
                cout << "The name for ID " << search << " is: " << names[(id[center][0])] << endl;
            }
            else
            {
                cout << "The ID " << search << " isn't exist." << endl;
            }
            
            
            }
            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            
            break;
        case 5:
            
            break;
        case 6:
            for (int i = 0; i < 5; i++)
            {
                cout << "Employee " << i+1 << "\nId: " << id[i][1] << "\nName: " << names[(id[i][0])] << endl; 
            }
            
            break;
        case 7:
            cout << "Exit. See you..." << endl;
            break;
        default:
            cout << "Sorry, invalid option. Try again." << endl;
            break;
        }

        system("pause");
        system("cls");

    } while ( opt != 7);
    
    
    return 0;
}
