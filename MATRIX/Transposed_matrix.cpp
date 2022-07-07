//Diego Cuevas
//Transposed matrix.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int matrix[3][3];

    for (int i = 0; i < 3; i++) //Fill the matrix
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
        
    }

    cout << "Initial matrix: " << endl;

    for (int i = 0; i < 3; i++) //Print initial matrix
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;

    }
    
    cout << "Transposed matrix: " << endl;

    for (int i = 0; i < 3; i++) //Print transposed matrix
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[j][i] << " ";
        }
        cout << endl;

    }
    
    return 0;
}
