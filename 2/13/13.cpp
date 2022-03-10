#include <iostream>

using namespace std;

int main()
{
    double a, b;

    cout << "Enter numbers ";
    cin >> a >> b;

    a = abs(a) > abs(b) ? a / 5 : a;
    cout << "A = " << a << "\nB = " << b;
}