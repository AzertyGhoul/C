#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;

    int counter = 0;

    cout << "Enter number : ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        if ((input[i] == '*') || (input[i] == '+') || (input[i] == '-') || (input[i] <= '9' && input[i] >= '0'))
            counter +=1;
    }

    cout << endl << counter;

}