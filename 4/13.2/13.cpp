#include<iostream>
#include<time.h>
#include<stdlib.h>
#include <iomanip>

using namespace std;

int main()
{
    srand(time(NULL));

    int arraySize, random, rows, columns;
    int sumMax, sumMin, sumForMin, sumForMax, maxRow, minRow;

    random = 50;
    sumForMax = sumForMin = sumMax = 0;
    sumMin = 12313123;

    cout << "Enter rows ";
    cin >> rows;

    cout << "Enter columns ";
    cin >> columns;

    double *array = new double[columns * rows];

    cout << "\nArray" << endl;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            array[i * columns + j] = rand() % random + 1;
            cout << setw(3) <<  array[i * columns + j];
            sumForMin += array[i * columns + j];
            sumForMax += array[i * columns + j];
        }

        if(sumForMax > sumMax)
        {
            sumMax = sumForMax;
            sumForMax = 0;
            maxRow = i;
        }

        if (sumForMin < sumMin)
        {
            sumMin = sumForMin;
            sumForMin = 0;
            minRow = i;
        }
        
        sumForMax = 0;
        sumForMin = 0;
        cout << endl;
    }

   cout << endl << "MaxRow" << endl;
    for (int i = 0; i < columns; i++)
    {
        cout << setw(3) << array[maxRow * columns + i];
    }

    cout << endl << "\nMinRow" << endl;
    for (int i = 0; i < columns; i++)
    {
        cout << setw(3) << array[minRow * columns + i];
    }
    
    
}