#include <iostream>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Enter numbers ";
    cin >> a >> b >> c;

    if ((a > b) && (b > c)) 
    {
        a *= 3;
        b *= 3;
        c *= 3;
        cout << "A = " << a << "\nB = " << b << "\nC = " << c;
    }
    else 
    {
        a = abs(a);
        b = abs(b);
        c = abs(c);
        cout << "A = " << a << "\nB = " << b << "\nC = " << c;
    }
}
