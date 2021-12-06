#include <iostream>
using namespace std;

struct Node
{
    int value;
    Node* Next;
};

void printlist(Node* n)
{
    while(n != NULL)
    {
        cout << n->value << " , ";
        n = n->Next;
    }
    cout << endl;
}

void insertatfront(Node**head, int newvalue)
{
    // prepare a new node
    Node* newnode = new Node();
    newnode->value = newvalue;
    // put in front of the list
    newnode->Next = *head;
    // move the head of the list to point to the newnode
    *head = newnode;
}

void insertatend(Node**head, int newvalue)
{
    // prepare a new Node
    Node* newnode = new Node();
    newnode->value = newvalue;
    newnode->Next = NULL;
    // if linked list is empty, newnode will be head of the list
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    // find the last node
    Node* last = *head;
    while (last->Next != NULL)
    {
        last = last->Next;
    }
    // insert a new node after the last node
    last->Next = newnode;

}

void insertafter(Node*previous, int newvalue)
{
    // check if previous is NULL
    if (previous == NULL)
    {
        cout << "previous must not be NULL" << endl;
        return;
    }
    // prepare a new node
    Node* newnode = new Node;
    newnode->value = newvalue;
    // insert new node after previous
    newnode->Next = previous->Next;
    previous->Next = newnode;
}

void remove(Node* n)
{
    // check if the head is NULL
    if (n == NULL)
    {
        cout << "The list is empty there is nothing to delete! " << endl;
        return ;
    }else{
        //Node Next(*n->Next);
        delete n;
        n = n->Next;
    }
}

int main()
{
    Node* head = new Node();
    Node* second = new Node();
    Node* third = new Node();

    head->value = 1;
    head->Next = second;
    second->value = 2;
    second->Next = third;
    third->value = 3;
    third->Next = NULL;

    printlist(head);
    insertatfront(&head, -1);
    printlist(head);
    insertatend(&head, 10);
    insertafter(second, 15);
    printlist(head);
    remove(head);
    printlist(head);
    return 0;
}