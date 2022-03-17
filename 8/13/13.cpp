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
    char tmpFirst;
    char tmpLast;
    int count = 0;

    
    file.open("text.txt", ios::in);
    getline(file, textInFile);
    file.close();

    textInFile.insert(textInFile.length(), " ");
    textInFile.insert(0, " ");

    fileAfterEdit.open("fileAfterEdit.txt", ios::out);
     
    for (int i = 0; i < textInFile.length(); i++)
    {
        if (textInFile[i] == ' ')
        {
            word = "";
        }
        else
            word += textInFile[i];

        if (textInFile[i - 1] == ' ' && textInFile[i] != ' ')
            tmpFirst = textInFile[i];
        
        if (textInFile[i + 1] == ' ' && textInFile[i] != ' ')
            tmpLast = textInFile[i];
            
        if (tmpFirst == tmpLast)
        {
            fileAfterEdit << word + " ";
            count += 1;
            tmpFirst = '1';
            tmpLast = '0';
        }
        else
        {
            tmpLast = '0';
        }

        if (textInFile[i] == ' ' && tmpLast == '0')
            tmpFirst = NULL;
        
    }   
    cout << count;

    fileAfterEdit.close();
}
