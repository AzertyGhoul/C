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
        headNode-> value = value;
        headNode -> next = NULL;
        head = headNode;
        tail = headNode;
    }
    else
    {
        Node* tailnode = new Node();
        tailnode -> value = value;
        tailnode -> next = NULL;
        tail -> next = tailnode;
        tail = tailnode;
    }
    
}

void printList(Node* n)
{
    while (n != NULL)
    {
        if (n -> value != 0)
            cout << n -> value << " ";

        n = n -> next;
    }
}

void deleteNode(Node* &node, int E)
{
    Node* copyNodeHead = NULL;
    Node* copyNodeTail = NULL;

    while (node != NULL)
    {

        if (node -> value == E){}
        else
            {
                insert(copyNodeHead, copyNodeTail, node -> value);
            }

        node = node -> next;
    }
    node = copyNodeHead;
    free(copyNodeHead);
    free(copyNodeTail);   
}

int main()
{
    srand(time(NULL));

    int sum = 0;
    int random = 10;
    int size;
    int counter = 0;
    int E = 0;
    
    cout << "\nEnter size : ";
    cin >> size;

    cout << "\nEnter E : ";
    cin >> E;

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
        printList(head);
    }

    cout << endl;

    deleteNode(head, E);
    
    if (size == 0)
    {
        cout << endl << "List is empty";
    }
    else
    {
        cout << endl << "List : ";
        printList(head);
    }
}

