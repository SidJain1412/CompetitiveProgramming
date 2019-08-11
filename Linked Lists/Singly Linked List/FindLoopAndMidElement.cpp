// Linked List program to:
// Search for an element in a LL
// Find the mid element of the LL
// Detect of any loop is present in the LL


#include <iostream>
using namespace std;

struct Node
{
    struct Node* next;
    int data;
};

Node* insert(Node* head, int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    Node* temp = head;
    newNode->data = data;
    newNode->next = NULL;
    if(head==NULL)
        return newNode;
    while(head->next!=NULL)
        head = head->next;
    head->next = newNode;
    return temp;
}

void display(Node* head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<endl;
        temp = temp->next;
    }
}

int count(Node* head)
{
    if(head==NULL)
        return 0;
    else 
        return 1+count(head->next);
}

bool search(Node* head, int data)
{
    if(head==NULL)
        return false;
    else
    {
        if(head->data==data)
            return true;
        else
            return search(head->next, data);
    }
}

int middle(Node* head)
{
    Node *ptr1 = head;
    Node *ptr2 = head;
    if(head==NULL)
        return 0;
    while(ptr2!=NULL && ptr2->next!=NULL)
    {
        ptr2 = ptr2->next->next;
        ptr1 = ptr1->next;
    }
    return ptr1->data;
}

bool has_cycle(Node* head) {
    Node* ptr1 = head;
    Node* ptr2 = head;
    if(head==NULL || head->next==NULL)
        return false;
        
    while(ptr1!=NULL && ptr2!=NULL && ptr2->next!=NULL)
    {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next->next;
        if(ptr2==ptr1)
            return true;
    }
    return false;
}

int main()
{
   cout << "Hello World" << endl; 
   cout<<"Creating a list"<<endl;
   Node* head = NULL;
   head = insert(head, 1);
   head = insert(head, 2);
   head = insert(head, 3);
   head = insert(head, 4);
   head = insert(head, 5);
   display(head);
   int ct = count(head);
   cout<<"Size of linked list is: "<<ct<<endl;
   bool found = search(head, 177);
   cout<<"Is found: "<<found<<endl;
   int mid = middle(head);
   cout<<"Mid is: "<<mid<<endl;
   bool cycle = has_cycle(head);
   cout<<"Cycle found: "<<cycle<<endl;
   return 0;
}