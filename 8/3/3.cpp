#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream file;
    char letter;
    string textInFile;
    string word;
    int sum = 0;
    int counter = 0;
    
    file.open("text.txt", ios::in);
    getline(file, textInFile);
    file.close();
    
    cout << endl << "Enter Letter : ";
    cin >> letter;
    cout << endl;
    
    for (int i = 0; i < textInFile.length(); i++)
    {
        if (textInFile[i] == letter)
        {
            sum += 1;
        }
        if (textInFile[i] != ' ')
        {
            counter += 1;
        }
    }
    
    if (sum > 0) 
    {
        double percentage = sum / (double)counter * 100;
        cout << "Percentage for this letter : " << percentage << "%";
    }
    else
        cout << "There is no such letter in the file";
    
}