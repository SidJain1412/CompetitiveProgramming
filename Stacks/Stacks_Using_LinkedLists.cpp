// STACKS USING LINKED LIST IN C

// IMPLEMENTATION OF STACK DATA STRUCTURE USING LINKED LISTS (POINTER-APPROACH)
// WITHOUT ANY STL OPERATIONS

// CONSTRAINTS: VALUES SHOULD BE INTEGERS (CAN BE CHANGED BY CHANGING THE DATATYPE)

// INPUT/OUTPUT:(MENU DRIVEN)
//              1.PUSH
//              2.POP
//              3.DISPLAY
//              4.EXIT
//              1
//              ENTER ELEMENT TO BE INSERTED: 10
//              1
//              ENTER ELEMENT TO BE INSERTED: 20
//              1
//              ENTER ELEMENT TO BE INSERTED: 30
//              3
//              30
//              20
//              10
//              2
//              30 HAS BEEN DELETED
//              3
//              20
//              10
#include <iostream>
using namespace std;
struct node
{
    long long int value;
    struct node *prev;
};
typedef struct node *nodeptr;

//FUNCTION TO DYNAMICALLY ALLOCATE MEMORY USING MALLOC FUNCTION FOR NODES
nodeptr getNode(long long int item)
{
    nodeptr p = (nodeptr)malloc(sizeof(struct node));
    p->prev = NULL;
    p->value = item;
    return p;
}

//PUSH FUNCTION TO INSERT ELEMENTS TO STACK
nodeptr push(long long int item, nodeptr top)
{
    nodeptr p = getNode(item);
    if (p == NULL)//IF MEMORY ON DEVICE IS FULL,NO NODE WILL BE FORMED
        cout << "OVERFLOW" << endl;
    else
    {
        p->prev = top;
        top = p;
    }
    return top;
}

//POP FUNCTION TO DELETE ELEMENTS FROM STACK
nodeptr pop(nodeptr top)
{
    if (top == NULL)//IF THE STACK IS EMPTY
        cout << "UNDERFLOW" << endl;
    else
    {
        long long int item;
        item = top->value;
        nodeptr temp = top;
        top = top->prev;
        free(temp);
        cout << item << " HAS BEEN DELETED" << endl;
    }
    return top;
}

//DISPLAY FUNCTION
void display(nodeptr top)
{
    nodeptr temp = top;
    while (temp != NULL)
    {
        cout << temp->value << endl;
        temp = temp->prev;
    }
}
int main()
{
    nodeptr top = NULL;
    long long int choice, item, i;
    for (i = 1; i; i++)//MENU DRIVEN
    {
        cout << "1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "ENTER ELEMENT TO BE INSERTED: ";
            cin >> item;
            top = push(item, top);
            break;
        case 2:
            top = pop(top);
            break;
        case 3:
            display(top);
            break;
        case 4:
            return 0;
        }
    }
    return 0;
}