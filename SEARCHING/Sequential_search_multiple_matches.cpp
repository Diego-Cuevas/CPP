//Diego Cuevas
/*This program makes a simple sequential search
for multiples matches.*/
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int i = 0, search = 6;
    int number[5] = { 2, 6, 9, 9, 7};
    char flag[5] = { 'F', 'F', 'F', 'F', 'F' };

    while ( i < 5 )
    {
        if (number[i] == search)
        {
            flag[i] = 'T';
        }
        i++;
        
    }
    
    i = 0;

    for (int j = 0; j < 5; j++)
    {
        if (flag[j] == 'T')
        {
            cout << "The number " << search << " has been founded in position " << j << endl;
            i++;
        }
    }
    
    cout << "The number " << search << " has been founded: " << i << " times." << endl;
    
    return 0;
}
