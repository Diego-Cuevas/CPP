//Diego Cuevas
//This program adds or subtraction matrixes.
#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {

    int rows = 0, columns = 0, option = 0;

    cout << "Enter amount of rows: ";
    cin >> rows;
    cout << "Enter amount of columns: ";
    cin >> columns;

    int matrix1[rows][columns] = {}, matrix2[rows][columns] = {}, matrix3[rows][columns] = {};

    for (int i = 0; i < rows; i++) //Fill matrix 1
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter value for matrix 1 [" << i << "][" << j << "]: ";
            cin >> matrix1[i][j];
        }
        
    }

    for (int i = 0; i < rows; i++) //Fill matrix 2
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "Enter value for matrix 2 [" << i << "][" << j << "]: ";
            cin >> matrix2[i][j];
        }
        
    }
    
    cout << "1 - Addition.\n2 - Subtraction.\nWhat you wanna do?: ";
    cin >> option;

    switch (option)
    {
    case 1:
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
            }

        }
        
        break;
    case 2:
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
            }

        }
        
        break;

    default:
        cout << "Error, that option doesn't exist." << endl;
        break;
    }
    
    cout << "Matrix 1" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix1[i][j] << " ";
            
        }
        cout << endl;

    }

    cout << "Matrix 2" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix2[i][j] << " ";
            
        }
        cout << endl;

    }

    cout << "Matrix 3" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << matrix3[i][j] << " ";
            
        }
        cout << endl;

    }

    return 0;
}
