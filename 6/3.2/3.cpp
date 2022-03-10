#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    string phrase;
    string word;

    int pos = 0;

    cout << "Enter string : ";
    getline(cin, input);

    cout << "Enter a phrase : ";
    getline(cin, phrase);

    if(input[input.length()] != ' ')
        input.insert(input.length(), " ");
    
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == ' ' && input.find(phrase, i - phrase.length()) != -1 && input.find(phrase, i - phrase.length()) <= i)
        {
            cout << word << " ";
        }
        else
        {
            word += input[i];
        }

        if (input[i] == ' ')
        {
            word = "";
        }
    }
}