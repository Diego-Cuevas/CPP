//Diego Cuevas
/*This program to searchs within an unordered array
how many times a number is repeated, if it exists.
The number can be chosen by the user.*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int search = 0, count = 0;
    int numbers[10] = { 2, 9, 2, 2, 5, 6, 9, 2, 9, 3};
    
    cout << "Enter number to search frecuency: ";
    cin >> search;

    for (int i = 0; i < 10; i++)
    {
        if (numbers[i] == search)
        {
            count++;
        }
        
    }
    
    cout << "The number " << search << " has been founded : " << count << " times." << endl;

    return 0;
}
