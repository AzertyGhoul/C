#include<iostream>
#include<string>

using namespace std;

struct conferance
{
    string secondName;
    string where;
    string number;
};


void printStrcut(conferance list[], int structSize)
{
    for (int i = 0; i < structSize; i++)
    {
        cout << "Second name : " << list[i].secondName << endl;
        cout << "Where : " << list[i].where << endl;
        cout << "Number : " << list[i].number << endl;
        cout << endl;
    }
}

void printStrcutInSearch(conferance list[], int structSize)
{
    for (int i = structSize; i <= structSize; i++)
    {
        cout << "Second name : " << list[i].secondName << endl;
        cout << "Where : " << list[i].where << endl;
        cout << "Number : " << list[i].number << endl;
        cout << endl;
    }
}

void sort(conferance list[], int arraySize)
{

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i; j < arraySize; j++)
            if (list[i].secondName[0] > list[j].secondName[0])
            {
                conferance tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        
    }
    
}

void search(conferance list[], int arraySize, string target)
{
    for (int i = 0; i < arraySize; i++)
        if (list[i].where == target || list[i].secondName == target || list[i].number == target)
            printStrcutInSearch(list, i);
}


int main()
{

    conferance members[] = {
        {"Nekrasov", "Russia", "+123"},
        {"Grozni", "Russia", "+087"},
        {"Novikov", "Switzerland", "+456"}
    };

    int size = sizeof(members) / sizeof(members[0]);

    string target;

    cout << "Enter target : ";
    getline(cin, target);
    cout << endl;

    sort(members, size);

    cout << endl << "Structure" << endl;
    printStrcut(members, size);

    cout << endl << "Search" << endl;
    search(members, size, target);

}