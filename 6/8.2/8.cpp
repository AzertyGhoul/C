#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;

    int counter = 0;

    cout << "Enter string : ";
    getline(cin, input);

    
    for (int i = 0; i < input.length(); i++)
        if (input[i] == ' ')
            input[i] = NULL;

    cout << endl << input;
}