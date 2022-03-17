#include<iostream>
#include<string>

using namespace std;

struct school
{
    string secondName;
    int math;
    int chemistry;
    int PE;
};

void printStrcut(school *list, int structSize)
{
    for (int i = 0; i < structSize; i++)
    {
        cout << "Second name : " << list[i].secondName << endl;
        cout << "Math : " << list[i].math << endl;
        cout << "Chemistry : " << list[i].chemistry << endl;
        cout << "PE : " << list[i].PE << endl;
        cout << endl;
    }
}

void enterStrcut(school *list, int structSize)
{
    for (int i = 0; i < structSize; i++)
    {
        string tmpName;
        int tmpMath;
        int tmpChemistry;
        int tmpPE;
        
        cout << "Second name : ";
        cin >> tmpName;
        list[i].secondName = tmpName;
        
        cout << "Math : ";
        cin >> tmpMath;
        list[i].math = tmpMath;
        
        cout << "Chemistry : ";
        cin >> tmpChemistry;
        list[i].chemistry = tmpChemistry;
        
        cout << "PE : ";
        cin >> tmpPE;
        list[i].PE = tmpPE;
        
        cout << endl;
    }
}

int main()
{
    int size = 2;
    
    school *students = new school[size];

    int sum = 0;

    string target;
    cout << endl << "Subject ";
        getline(cin, target);
    
    enterStrcut(students, size);
    system("cls");

    for (int i = 0; i < size; i++)
    {
        if (target == "Chemistry")
            sum += students[i].chemistry;
        
        if (target == "PE")
            sum += students[i].PE;

        if (target == "math")
            sum += students[i].math;
    }

    double averageScore = sum / size;

    cout << endl << "Average score for " << target << " " << averageScore << endl;

    for (int i = 0; i < size; i++)
    {
        if (target == "chemistry")
            if (students[i].chemistry > averageScore)
                cout << endl << "Students grade is above average : " << students[i].secondName << endl;

        if (target == "PE")
            if (students[i].PE > averageScore)
                cout << endl << "Students grade is above average : " << students[i].secondName << endl;

        if (target == "math")
            if (students[i].math > averageScore)
                cout << endl << "Students grade is above average : " << students[i].secondName << endl;
    }

    cout << endl  << "Structure" << endl ;
    printStrcut(students, size);
}
