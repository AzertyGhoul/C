#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;

    bool check;

    cout << "Enter number : ";
    getline(cin, input);

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '.')
        {
            check = false;
            break;
        }
        else
            check = true;
    }

    cout << endl << (check ? "Integer" : "Is not integer");
}