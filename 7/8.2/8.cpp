#include<iostream>
#include<string>

using namespace std;

struct gym
{
    string customer;
    int howMuch;
    string customerTrainer;
};


void printStrcut(gym list[], int structSize)
{
    for (int i = 0; i < structSize; i++)
    {
        cout << "Customer : " << list[i].customer << endl;
        cout << "How Much : " << list[i].howMuch << endl;
        cout << "Customer Trainer : " << list[i].customerTrainer << endl;
        cout << endl;
    }
}

void edit(gym list[], int structSize, int target, int targetNumber, string newValue)
{
    for (int i = 0; i < structSize; i++)
    {
        switch (target)
        {
        case (1):
            list[targetNumber - 1].customer = newValue;
            break;

        case (2):
            list[targetNumber - 1].howMuch = stoi(newValue);
            break;

        case (3):
            list[targetNumber - 1].customerTrainer = newValue;
            break;
        
        default:
            break;
        }
    }
}

void sort(gym list[], int arraySize)
{

    for (int i = 0; i < arraySize; i++)
    {
        for (int j = i; j < arraySize; j++)
            if (list[i].howMuch > list[j].howMuch)
            {
                gym tmp = list[i];
                list[i] = list[j];
                list[j] = tmp;
            }
        
    }
    
}

void enterStrcut(gym *list, int structSize)
{
    for (int i = 0; i < structSize; i++)
    {
        string tmpCustomer;
        int tmpHowMuch;
        string tmpCustomerTrainer;
        
        cout << "Customer : ";
        cin >> tmpCustomer;
        list[i].customer = tmpCustomer;
        
        cout << "How Much : ";
        cin >> tmpHowMuch;
        list[i].howMuch = tmpHowMuch;
        
        cout << "Customer Trainer : ";
        cin >> tmpCustomerTrainer;
        list[i].customerTrainer = tmpCustomerTrainer;
        
        cout << endl;
    }
}

int main()
{
    int size = 2;

    gym *members = new gym[size];
    enterStrcut(members, size);
    system("cls");

    int target;
    int targetNumber;

    string newValue;

    cout << endl << "Structure" << endl;
    printStrcut(members, size);

    cout << "Enter member number : ";
    cin >> targetNumber;
    cout << endl;

    cout << "Enter target : ";
    cin >> target;
    cout << endl;

    cin.ignore();
    cout << "Enter new value : ";
    getline(cin, newValue);

    edit(members, size, target, targetNumber, newValue);
    sort(members, size);

    cout << endl << "Structure after sort/edit" << endl;
    printStrcut(members, size);

}
