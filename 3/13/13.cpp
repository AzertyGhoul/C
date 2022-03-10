#include <iostream>

using namespace std;

int main()
{
    int m, n, start, end;
    int sum = 0;

    cout << "Enter numbers ";
    cin >> m >> n;

    m < n 
    ? (start = m, end = n)
    : (start = n, end = m);

    for (int i = start; i <= end; i++)
        sum += i;
    cout << "Sum = " << sum;
}