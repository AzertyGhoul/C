#include<iostream>

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

int main()
{
    int a;

    cout << "\nEnter number : ";
    cin >> a;
    cout << "\nSum of factorials : " << factorial(a);
}