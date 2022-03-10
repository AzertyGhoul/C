#include<iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter number ";
    cin >> number;

    for (int i = 1000; i < 10000; i++)
        if (i % 100 == number)
            cout << "\nNumber = " << i;
}