//Diego Cuevas
//This program pass elements from a matrix to another.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int matrix1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[3][3] = {};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix2[i][j] = matrix1[i][j];
        }
        
    }
    
    cout << "Matrix 1 | ";

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix1[i][j] << ' ';
        }
        
    }

    cout << endl << "Matrix 2 | ";
    
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix2[i][j] << ' ';
        }
        
    }
    
    return 0;
}
