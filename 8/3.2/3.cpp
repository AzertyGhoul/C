#include <iostream>
#include <fstream>
#include <time.h>
#include <stdlib.h> 

using namespace std;

int main()
{
    srand(time(NULL));
    
    fstream fileN;
    fstream fileWithIf;
    int size = 20;
    int random = 10;
    int a = 0;
    int b = 0;

    cout << "Enter number a : ";
    cin >> a;

    cout << endl << "Enter number b : ";
    cin >> b;
    
    fileN.open("fileN.dat", ios::out);
    fileWithIf.open("fileNext.dat", ios::out);
    
    for (int i = 0; i < size; i++)
    {
        int randomNumbers = rand() % random + 1;     
        fileN << randomNumbers << " ";

        int checkNumber = 0;

        if (randomNumbers % a == 0 && randomNumbers % b != 0)
        {
            checkNumber = randomNumbers;
            fileWithIf << checkNumber << " ";
        }
    }
    
    fileWithIf.close();   
    fileN.close();
}