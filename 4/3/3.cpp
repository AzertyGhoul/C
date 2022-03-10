#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main()
{
    srand(time(NULL));

    int arraySize, i, random, indexMin, indexMax, start, end;

    start = 0;
    end = 0;
    random = 10;

    cout << "Enter size of array ";
    cin >> arraySize;

    int *array = new int[arraySize];

    cout << "\nArray : ";
    for (i = 0; i < arraySize; i++)
    {
        array[i] = rand() % random;
        cout << array[i] << " ";
    }

    int max = array[0];
    int min = array[0];

    cout << endl << "indexMax Element = ";
    for (i = 0; i < arraySize; i++)
        if (max > array[i]){}
        else
        {
            max = array[i];
            indexMax = i;
        }

    cout << indexMax;

    cout <<"\nindexMin Element = ";
    for (i = 0; i < arraySize; i++)
        if (min < array[i]){}
        else
        {
            min = array[i];
            indexMin = i;
        }
    cout << indexMin;

    if (indexMax < indexMin)
    {
        start = indexMax;
        end = indexMin;
    }
    else
    {   
        start = indexMin;
        end = indexMax;
    }


    cout << endl << start << " " << end;

    cout << endl <<"Deleted array : ";
    for (i = 0; i < start; i++)
    {
        cout << array[i] << " ";
    }

    for (i = end + 1; i < arraySize; i++)
    {
        cout << array[i] << " ";
    }
    
 
}