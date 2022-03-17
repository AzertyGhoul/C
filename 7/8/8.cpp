#include<iostream>
#include<string>

using namespace std;

struct school
{
    string secondName;
    string subject;
    int experiance;
};

void printStrcut(school *list, int structSize)
{
    for (int i = structSize; i <= structSize; i++)
    {
        cout << "Second name : " << list[i].secondName << endl;
        cout << "Subject : " << list[i].subject << endl;
        cout << "Experiance : " << list[i].experiance << endl;
        cout << endl;
    }
}

void enterStrcut(school *list, int structSize)
{
    for (int i = 0; i < structSize; i++)
    {
        string tmpName;
        string tmpSubject;
        int tmpExperiance;
        
        cout << "Second name : ";
        cin >> tmpName;
        list[i].secondName = tmpName;
        
        cout << "Subject : ";
        cin >> tmpSubject;
        list[i].subject = tmpSubject;
        
        cout << "Experiance : ";
        cin >> tmpExperiance;
        list[i].experiance = tmpExperiance;
        
        cout << endl;
    }
}

int main()
{
    int size = 2;

    school *teachers = new school[size];

    string target;
    cout << endl << "Subject ";
    getline(cin, target);
    cout << endl;


    enterStrcut(teachers, size);

    cout << "Teachers with your subject" << endl;
    for (int i = 0; i < size; i++)
        if (target == teachers[i].subject)
        {
            int start = i;
            printStrcut(teachers, start);
        }
}
