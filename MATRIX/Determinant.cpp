//Diego Cuevas
//This program request to user a matrix 3 by 3 and shows the determinant.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
    
    int matrix[3][3] = {};

    for (int i = 0; i < 3; i++) //Fill matrix
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
        
    }

    int determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[2][1] * matrix[1][2]) +
                      matrix[1][0] * (matrix[2][1] * matrix[0][2] - matrix[0][1] * matrix[2][2]) +
                      matrix[2][0] * (matrix[0][1] * matrix[1][2] - matrix[1][1] * matrix[0][2]) ;

    for (int i = 0; i < 3; i++) //Print matrix
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;

    }

    cout << "The determinant is: " << determinant << endl;
    
    return 0;
}
