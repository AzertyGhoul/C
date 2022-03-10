#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

class Node
{
public:
    int value;
    Node* next;
};

void insert(Node* &head, Node* &tail, int value)
{
    if (head == NULL)
    {
        Node* headNode = new Node();
        headNode -> value = value;
        headNode -> next = NULL;
        head = headNode;
        tail = headNode;
    }
    else
    {
        Node* tailNode = new Node();
        tailNode -> value = value;
        tailNode -> next = NULL;
        tail -> next = tailNode;
        tail = tailNode;
    }
    
}

void printListAndAverage(Node* n, int sum, int counter)
{
    while (n != NULL)
    {
        cout << n -> value << " ";
        sum += n -> value;
        counter += 1;
        n = n -> next;
    }

    cout << endl << "Amin : " <<  sum / double(counter);
    
}

int main()
{
    srand(time(NULL));

    int sum = 0;
    int random = 10;
    int size;
    int counter = 0;
    
    cout << "\nEnter size : ";
    cin >> size;

    Node* head = NULL;
    Node* tail = NULL;
    
    for (int i = 0; i < size; i++)
    {
        int value = rand() % random + 1;
        insert(head, tail, value);
    }
    
    if (size == 0)
    {
        cout << endl << "List is empty";
    }
    else
    {
        cout << endl << "List : ";
        printListAndAverage(head, sum, counter);
    }
}

