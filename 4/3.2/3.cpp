#include<iostream>
#include<time.h>
#include<stdlib.h>
#include<iomanip>

using namespace std;

int main()
{
    srand(time(NULL));

    int arraySize, rows, columns;
    int minRow, minColumn, min;

    int random = 10;
    minRow = minColumn = 0;

    cout << "Enter rows ";
    cin >> rows;

    cout << "Enter columns ";
    cin >> columns;

    int *array = new int[columns * rows];

    cout << "\nArray" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            array[i * columns + j] = rand() % random + 1;
            cout << setw(3) <<  array[i * columns + j];
        }

        cout << endl;
    }

    min = array[0 * columns + 0];
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
            if(array[i * columns + j] < min)
            {
                min = array[i * columns + j];
                minRow = i;
                minColumn = j;
            }
        
    }
    
    cout << endl;

    for (int i = 0; i < columns ; i++)
    {
        int tmp = array[minRow * columns + i];
        array[minRow * columns + i] = array[i * columns + minColumn];
        array[i * columns + minColumn] = tmp;
        
    }
    
    cout << "\nArray" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << setw(3) <<  array[i * columns + j];
        }

        cout << endl;
    }
    
}