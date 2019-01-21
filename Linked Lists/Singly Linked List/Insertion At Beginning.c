// Write a program to create a linked list with the given number of elements by inserting every element at the beginning.
//If there are no elements given then the head of the linked list will be null. 
//After completing the insertion of all elements print the elements in the linked list at the end. 
//If no elements are inserted then print null on the standard output.

// Note: Intially the linked list will be empty

// Input Format

// First Line contains number of elements(n) to be inserted and followed the n elements

// Constraints

// 0<=n<=100

// 1<=element<=10000

// Output Format

// Print the elements in the linkedlist

// Sample Input 0

// 5
// 5
// 4
// 3
// 2
// 1
// Sample Output 0

// 1->2->3->4->5
// Explanation 0

// Initially the list will be empty and then we will add 5. After that we will add 4 infront of 5. 
//Similarly 3 infront of 4 and so on.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct node str;
struct node
{
    int data;
    str *next;
};

str* insert(str *head, int item)
{
    if(head==NULL)
    {
        head=(str *)malloc(sizeof(str));
        head->data=item;
        head->next=NULL;
    }
    else
    {
        str *new=(str *)malloc(sizeof(str));
        new->data=item;
        new->next=head;
        head=new;
    }
    return head;
}

void printlist(str *head)
{
    str *ptr=head;
    while(ptr->next != NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("%d",ptr->data);
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n,i,ele;
    scanf("%d",&n);
    str *head=NULL;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ele);
        head=insert(head,ele);
    }
    if(head==NULL)
        printf("null");
    else
        printlist(head);
    return 0;
}
