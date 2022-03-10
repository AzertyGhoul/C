#include<iostream>

using namespace std;

int main()
{
    int number,i;

    cout << "Enter number ";
    cin >> number;
    i = 2;

    cout << "Factors of number ";
    while (number > 1)
        if (number % i == 0)
        {
            number = number / i;
            int tmpFactor = i;
            cout << tmpFactor << " ";
        }
        else
            i++;
    
}