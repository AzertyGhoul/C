#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int arraySize, i, random, count;

    random = 15;
    count = 0;

    cout << "Enter size of array ";
    cin >> arraySize;

    double *array = new double[arraySize];

    cout << "\nArray : ";
    for (i = 0; i < arraySize; i++)
    {
        array[i] = rand() % random - 5;
        cout << array[i] << " ";
    }

    for (i = 0; i < arraySize; i++)
    {
        if((array[i] > 0) && (array[i+1] < 0))
            count += 1;

        if((array[i] < 0) && (array[i+1] > 0))
            count += 1;
    }

    cout << endl << count;
    
}