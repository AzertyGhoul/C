#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream file;
    fstream fileAfterEdit;
    char letter;
    string textInFile;
    string word;
    int tmpFirst = -99999;
    int tmpLast = 99999;
    int count = 0;

    
    file.open("text.txt", ios::in);
    getline(file, textInFile);
    file.close();

    textInFile += ' ';
    textInFile.insert(0, " ");

    cout << "Enter letter : ";
    cin >> letter;

    fileAfterEdit.open("fileAfterEdit.txt", ios::out);
     
    for (int i = 0; i < textInFile.length(); i++)
    {
        if (textInFile[i] == ' ')
        {
            word = "";
        }
        else
            word += textInFile[i];

        if (textInFile[i] == letter && textInFile[i - 1] == ' ')
            tmpFirst = 1;
        
        if (textInFile[i + 1] == ' ' && textInFile[i] == letter)
            tmpLast = 1;
            
        if (tmpFirst == tmpLast)
        {
            fileAfterEdit << word + " ";
            count += 1;
            tmpFirst = 9999;
            tmpLast = -9999;
        }
        else
        {
            tmpLast = -99999;
        }

        if (textInFile[i] == ' ' && tmpLast == -99999)
            tmpFirst = 9999;
        
    }   
    cout << count;

    fileAfterEdit.close();
}