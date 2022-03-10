#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    char letterEnd;

    int counter = 0;

    cout << "Enter string : ";
    getline(cin, input);

    cout << endl << "Enter letter : ";
    cin >> letterEnd;
    
    if(input[input.length()] != ' ')
        input.insert(input.length(), " ");

    for (int i = 0; i < input.length(); i++)
        if ((input[i] == ' ') && (input[i-1] == letterEnd))
            counter +=1;

    cout << endl << counter;

}