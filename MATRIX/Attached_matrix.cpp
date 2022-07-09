//Diego Cuevas
//This program request to user a matrix 3 by 3 and shows the attached matrix.
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

    cout << "Original matrix" << endl;

    for (int i = 0; i < 3; i++) //Print matrix
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;

    }

    int attached[3][3] = {}; //Create array for attached matrix

    for (int i = 0; i < 3; i++) //Calculate the attached matrix
    {
        for (int j = 0; j < 3; j++)
        {
            attached[i][j] = (matrix[(i+1) % 3][(j+1) % 3] * matrix[(i+2) % 3][(j+2) % 3]
                            - matrix[(i+1) % 3][(j+2) % 3] * matrix[(i+1) % 3][(j+1) % 3]);
        }

    }

    cout << "Attached matrix" << endl;

    for (int i = 0; i < 3; i++) //Print the attached matrix
    {
        for (int j = 0; j < 3; j++)
        {
            cout << attached[i][j] << " ";
        }
        cout << endl;

    }
    
    return 0;
}
