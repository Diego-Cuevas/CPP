//Diego Cuevas
//This program request the data for a 2 by 2 matrix and shows the transposed matrix.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    int matrix[2][2] = {};

    for (int i = 0; i < 2; i++) //Fill the matrix
    {
        for (int j = 0; j < 2; j++)
        {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
        
    }
    
    cout << "Initial matrix" << endl;

    for (int i = 0; i < 2; i++) //Show initial matrix
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;

    }
    
    cout << "Transposed matrix" << endl;
    
    for (int i = 0; i < 2; i++) //Show transposed matrix
    {
        for (int j = 0; j < 2; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;

    }

    return 0;
}
