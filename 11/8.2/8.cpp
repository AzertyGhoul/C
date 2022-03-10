#include <iostream>
#include <stdlib.h>
#include <time.h>

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
        Node* fNode = new Node();
        fNode -> value = value;
        fNode -> next = NULL;
        head = fNode;
        tail = fNode;
    }
    else
    {
        Node* Enode = new Node();
        Enode -> value = value;
        Enode -> next = NULL;
        tail -> next = Enode;
        tail = Enode;
    }
}

void printList(Node* node)
{
    while(node != NULL)
    {
        cout << node -> value << " ";
        node = node -> next;
    }
}

void insertList(Node* &head, Node* tail, int E)
{
    Node* resultHead = NULL;
    Node* resultTail = NULL;
    
    Node* headCopy = head;
    
    bool onceCheck = false;
    
    while (head != NULL)
    {
        insert(resultHead, resultTail, head -> value);
        
        if(head -> value == E && !onceCheck)
        {
            while (headCopy != NULL)
            {
                insert(resultHead, resultTail, headCopy -> value);
                
                headCopy = headCopy -> next;
            }
            onceCheck = true;
        }
        
        head = head -> next;
    }
    
    free(resultHead);
    free(resultTail);
    free(headCopy);   
    head = resultHead;
}

int main()
{
    srand(time(NULL));
    
    Node* head = NULL;
    Node* tail = NULL;
    
    int random = 10;
    int size;
    int E;

    cout << "\nEnter Size : ";
    cin >> size;
    cout << endl;
    
    cout << "Enter E : ";
    cin >> E;
    cout << endl;
    
    for (int i = 0; i < size; i++)
    {
        insert(head, tail, rand() % random + 1);
    }
    
    cout << "List : ";
    printList(head);
    
    insertList(head, tail, E);
    
    cout << "\n\nList after check : ";
    printList(head);
}