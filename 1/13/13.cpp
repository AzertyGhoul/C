#include<iostream>
#include<cmath>

using namespace std;

int main(){
    double r,a,c,b;
    cout << "Enter hypotenuse and side of triangle ";
    cin >> a >> c;
    b = sqrt(pow(c, 2) - pow(a, 2));
    r = (a+b-c)/2;
    cout << "Radius = " << r << "\nSide of triangle = " << b;
}