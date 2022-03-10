#include <iostream>

using namespace std;

int main()
{
    double a, b;

    cout << "Enter numbers ";
    cin >> a >> b;

    a > b ? cout << a : cout << a << " " << b;
}