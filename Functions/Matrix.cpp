//Diego Cuevas
/*This program creates a function to cube a numbers
from a matrix.*/
#include <iostream>
using namespace std;

//Prototype functions
void Cube(int matrix[][3], int, int);
void Print_matrix(int matrix[][3], int, int);

int main(int argc, char const *argv[])
{   
    const int files = 3, columns = 3;
    int matrix[3][3] = { {2, 5, 3}, {5, 6, 8}, {3, 2, 1} };
    
    Cube(matrix, files, columns);
    Print_matrix(matrix, files, columns);

    return 0;
}

//Definition functions
void Cube(int matrix[][3], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matrix[i][j] = matrix[i][j] * matrix[i][j] * matrix[i][j];
        }
        
    }
    
}

void Print_matrix(int matrix[][3], int f, int c)
{
    for (int i = 0; i < f; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}