/*
   Write a program to create a linked list with the given number of elements by inserting every element at the beginning.If there are no elements given then the head of the linked list will be null. After completing the insertion of all elements print the elements in the linked list at the end. If no elements are inserted then print null on the standard output.

   Note: Intially the linked list will be empty

   Input Format

   First Line contains number of elements(n) to be inserted and followed the n elements

   Constraints

   0<=n<=100

   1<=element<=10000

   Output Format

   Print the elements in the linkedlist

   Sample Input 0

   5
   5
   4
   3
   2
   1
   Sample Output 0

   1->2->3->4->5
   Explanation 0

   Initially the list will be empty and then we will add 5. After that we will add 4            infront of 5. Similarly 3 infront of 4 and so on.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

struct node {
        int data;
        struct node *next;
};

class list {
node *head,*tail;
public:
list()
{
        head=NULL;
        tail=NULL;
}
void insert(int value){
        node *temp=new node;
        temp->data=value;
        if(head==NULL)
        {
                head=temp;
                tail=temp;
        }
        else
        {
                tail->next=temp;
                tail=temp;
        }
}
void display()
{
        node *temp=new node;
        temp=head;
        while(temp->next!=NULL)
        {
                cout<<temp->data<<"->";
                temp=temp->next;
        }
        cout<<temp->data;
}
void insertbeg(int value){
        node *temp=new node;
        temp->data=value;
        temp->next=head;
        head=temp;
}

};

int main() {
        int a,i;
        cin>>a;
        int b[a];
        list l1;
        cin>>b[0];
        l1.insert(b[0]);
        for(i=1; i<a; i++)
        {
                cin>>b[i];
                l1.insertbeg(b[i]);
        }
        l1.display();
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        return 0;
}
