#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 

using namespace std;

int main()
{
    srand(time(NULL));

    fstream fileN;
    fstream fileSum;
    int size = 0;
    int sum = 0;
    int random = 10;

    cin >> size;

    fileN.open("FileN.dat", ios::out);
    fileSum.open("FileSum.dat", ios::out);

    for (int i = 0; i < size; i++)
    {
        int randomNumbers = rand() % random + 1;
        fileN << randomNumbers << " ";

        sum += randomNumbers;
        fileSum << sum << " ";
    }
    
    fileN.close();
    fileSum.close();
}