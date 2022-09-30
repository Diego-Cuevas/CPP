//Diego Cuevas
//
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{   
    int aux = 0, pos = 0, numbers[10] = {9, 4, 2, 7, 3, 10, 5, 1, 8, 6};

    for (int i = 0; i < 10; i++)
    {
        pos = i;
        aux = numbers[i];

        while ((numbers[pos - 1] > aux) && (pos > 0))
        {
            numbers[pos] = numbers[pos - 1];
            pos--;
        }
        
        numbers[pos] = aux;
    }
    

    for (int i = 0; i < 10; i++)
    {
        cout << numbers[i] << ", ";
    }
    
    
    return 0;
}
