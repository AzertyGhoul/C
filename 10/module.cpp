#include "module.h"
#include <iostream>

using namespace std;

int factorial(int n)
{
    int end = n;
    int sum = 0;

    if (n == 0)
        return 1;
    else
        for(int i = 1; i < end; i++)
        {
            n *= i;
            sum += n;
        }
    

    return sum;
}

int modifiedArray(int *array, int number, int arraySize)
{
    srand(time(NULL));

    int random = 10;

    for (int i = 0; i < number; i++)
        array[i] *= rand() % random + 1;
  
    return *array;

}

int sogl(char letter)
{
    char *letters = "bcdfghjklmnpqrstvwxyz";

    bool check;

    letter = tolower(letter);

    for (int i = 0; i < 21; i++)
        if (letter == letters[i])
            return 1;
            
            
    return 0;   
}
