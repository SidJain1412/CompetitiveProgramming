// You are given N queries:-
// 1. X- Push the element X at top of the stack
// 2. Delete the element at top of the stack
// 3. Print the maximum element of the stack

// Input Format:- 
// N, N lines  follows each query

// Output format:- 
// Print max element for each query of type 3

// Sample Input 0

// 10
// 1 97
// 2
// 1 20
// 2
// 1 26
// 1 20
// 2
// 3
// 1 91
// 3
// Sample Output 0

// 26
// 91

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
typedef struct node stack;
struct node
{
    int data;
    stack *next;
}*top,*top1;
int max;
void insert(int val)
{
    stack *new=(stack *)malloc(sizeof(stack));
    new->data = val;
    if(top==NULL)
    {
        new->next=NULL;
        top=new;
        stack *new1=(stack *)malloc(sizeof(stack));
        new1->data=val;
        new1->next=NULL;
        top1=new1;
        max=new1->data;
    }
    else
    {
        new->next=top;
        top=new;
        if(top->data >= max)
        {
            stack *new1=(stack *)malloc(sizeof(stack));
            new1->data = top->data;
            new1->next=top1;
            top1=new1;
        }
    }
}

void pop()
{
    stack *ptr=top;
    top=top->next;
    if(ptr->data == top1->data)
    {
        stack *ptr1=top1;
        top1=top1->next;
        free(ptr1);
    }
    free(ptr);
}

int findmax()
{
    return top1->data;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    scanf("%d",&n);
    int choice,val;
    while(n--)
    {
        scanf("%d",&choice);
        if(choice==1)
        {
            scanf("%d",&val);
            insert(val);
        }
        else if(choice==2)
        {
            pop();
        }
        else if(choice==3)
        {
            max=findmax();
            printf("%d\n",max);
        }
    }
    return 0;
}
