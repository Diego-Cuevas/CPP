//Diego Cuevas
//Symmetric matrix.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int rows = 0, columns = 0;

    cout << "Enter amount of rows: ";
    cin >> rows;
    cout << "Enter amount of columns: ";
    cin >> columns;

    int matrix[rows][columns] = {};

    for (int i = 0; i < rows; i++) //Fill the matrix
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter value for [" << i << "][" << j << "]: ";
            cin>> matrix[i][j];
        }
        
    }
    
    if (rows == columns) //Check the if matrix is symmetric
    {
        int i = 0, j = 0;
        char symmetric = 'Y';

        do
        {
            do
            {
                if (matrix[i][j] != matrix[j][i])
                {
                    symmetric = 'N';
                }
                j++;

            } while (symmetric == 'Y' && i < rows && j < columns);

            i++;

        } while (symmetric == 'Y' && i < rows && j < columns);
        
        if (symmetric == 'Y')
        {
            cout << "The matrix is symmetric." << endl;
        }
        else
        {
            cout << "The matrix isn't symmetric." << endl;
        }
        
    }
    else
    {
        cout << "The matrix isn't symmetric." << endl;
    }
    
    
    return 0;
}
