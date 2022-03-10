#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int modifiedArray(int *array, int number, int arraySize)
{
    srand(time(NULL));

    int random = 10;

    for (int i = 0; i < number; i++)
        array[i] *= rand() % random + 1;
  
    return *array;

}

int main()
{
    srand(time(NULL));

    int a,arraySize;

    int random = 10;

    cout << "\nEnter number : ";
    cin >> a;

    cout << endl << "Enter size of array : ";
    cin >> arraySize;

    int *array = new int[arraySize];

    cout << "\nArray : ";
    for (int i = 0; i < arraySize; i++)
    {
        array[i] = rand() % random;
        cout << array[i] << " ";
    }

    modifiedArray(array, a, arraySize);
    
    cout << endl << endl << "Modified array : ";
    for (int i = 0; i < arraySize; i++)
        cout << array[i] << " ";
}