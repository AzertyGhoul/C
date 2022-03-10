#include<iostream>
#include<string>

using namespace std;

struct school
{
    string secondName;
    string subject;
    int experiance;
};

void printStrcut(school list[], int structSize)
{
    for (int i = structSize; i <= structSize; i++)
    {
        cout << "Second name : " << list[i].secondName << endl;
        cout << "Subject : " << list[i].subject << endl;
        cout << "Experiance : " << list[i].experiance << endl;
        cout << endl;
    }
}

int main()
{

    school teachers[] = {
        {"Alex", "Math", 4},
        {"Mark", "Chemistry", 3},
        {"Mars", "PE", 6}
    };

    int size = sizeof(teachers) / sizeof(teachers[0]);
    int sum = 0;

    string target;

    cout << endl << "Subject ";
    getline(cin, target);

    for (int i = 0; i < size; i++)
        if (target == teachers[i].subject)
        {
            int start = i;
            printStrcut(teachers, start);
        }
}