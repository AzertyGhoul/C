#include<iostream>

using namespace std;

int main(){
    float a,b,c;
    cout << "Enter sides of triangle = ";
    cin >> a >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));
    cout << "Hypotenuse = " << c;
}