#include<iostream>
#include"module.h"


using namespace std;

int main()
{
    srand(time(NULL));

    char a;

    cout << "\nEnter letter : ";
    cin >> a;

    cout << sogl(a);

}