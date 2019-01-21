// Linked List Deletions

// You will be implementing functions to delete nodes from a linkedlist.

// You will have to copy the part for inserting nodes from the previous problem

// The following is the structure of the linked list node :

// struct LinkedListNode {
// 	int val;
//     struct LinkedListNode* next;
// };
// typedef struct LinkedListNode LinkedListNode;
// Additionally, here are the details of the functions that you are expected to implement :

// LinkedListNode* deleteAtBeginning(LinkedListNode* head)
// /* 
//  * Deletes the node at the beginning of the linked list and
//  * returns a pointer to the head of the new linked list.
//  * returns NULL if head is NULL
//  */
 
// LinkedListNode* deleteAtEnd(LinkedListNode* head)

//  * Deletes the node at the end of the linked list and
//  * returns a pointer to the head of the new list
//  * returns NULL if no last node present
 
 
// LinkedListNode* deleteAtPosition(LinkedListNode* head, int pos)
// /*
//  * Deletes the node at "pos" position of the linked list
//  * "pos" = 1 indicates delete the first node
//  * return the head of the original linked list if "pos" is invalid
//  * Must return a pointer to the head of the new list after deletion
//  */
// Input
// Not Needed

// Output
// Not Needed

// Instructions
// You are only allowed to edit the Body of the code
// The Head and the Tail of the code must remain as it is
// You are not responsible for taking any input/output
// You must write the function with names exactly as given above
// You must not create any global variables
// Sample Input 0

// 10 10
// Sample Output 0

// correct

//-------------------- head of the code ------------------------

#include <string.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define in(x) scanf(" %d", &x);
#define LinkedListNode LinkedListNode
typedef struct LinkedListNode LinkedListNode;
struct LinkedListNode {
    int val;
    struct LinkedListNode* next;
};


//-------------------- body of the code ------------------------


LinkedListNode* insertAtBeginning(LinkedListNode* head, int val) 
{
    if(head==NULL)
    {
        head=(LinkedListNode*)malloc(sizeof(LinkedListNode));
        head->val=val;
        head->next=NULL;
        return head;
    }
    LinkedListNode* p=(LinkedListNode*)malloc(sizeof(LinkedListNode));
    p->val=val;
    p->next=head;
    head=p;
    return head;
}
LinkedListNode* insertAtEnd(LinkedListNode* head, int val) {
    if(head==NULL)
    {
        head=(LinkedListNode*)malloc(sizeof(LinkedListNode));
        head->val=val;
        head->next=NULL;
        return head;
    }
    LinkedListNode* p=head;
    LinkedListNode* temp=(LinkedListNode*)malloc(sizeof(LinkedListNode));
    while(p->next!=NULL)
        p=p->next;
    p->next=temp;
    temp->val=val;
    temp->next=NULL;
    
    return head;

}
LinkedListNode* insertAtPosition(LinkedListNode* head, int val, int pos) {
    if(pos<=0)
        return head;
    if(pos==1)
        return insertAtBeginning(head,val);
    
    LinkedListNode *p=head;
    LinkedListNode *temp;
    for(int i=0;i<pos-1;i++)
    {
        temp=p;
        p=p->next;
        if(temp==NULL)
            return head;
    }
    LinkedListNode* node=(LinkedListNode*)malloc(sizeof(LinkedListNode));
    node->next=p;
    temp->next=node;
    node->val=val;
    
    return head;

}
LinkedListNode* deleteAtBeginning(LinkedListNode* head) {
    if(head==NULL || head->next==NULL)
        return NULL;
    
    LinkedListNode *p=head;
    head=head->next;
    free(p);
    return head;

}
LinkedListNode* deleteAtEnd(LinkedListNode* head) {
    if(head==NULL || head->next==NULL)
        return NULL;
    
    LinkedListNode*p=head;
    LinkedListNode*temp;
    while(p->next!=NULL)
    {
        temp=p;
        p=p->next;
    }
    temp->next=NULL;
    free(p);
    
    return head;

}
LinkedListNode* deleteAtPosition(LinkedListNode* head, int pos) {
    
    if(pos<=0)
        return head;
    else if(pos==1)
    {
        if(head==NULL)
            return head;
        return deleteAtBeginning(head);
    }
    
    LinkedListNode* temp;
    LinkedListNode* p=head;
    
    for(int i=0;i<pos-1;i++)
    {
        temp=p;
        p=p->next;
        if(p==NULL)
            return head;
    }
    temp->next=p->next;
    free(p);
    return head;

}
//-------------------- tail of the code ------------------------


int rng(int lim) {
    if (lim == 0) return 0;
    return rand()%lim;
}
int a[1005], sz = 0;
void insertt(int val, int pos) {
    if (pos < 0) return;
    if (pos > sz + 1) return;
    sz += 1;
    for (int i = sz; i > pos; i--)
        a[i] = a[i - 1];
    a[pos] = val;
}
void erasee(int pos) {
    if (pos > sz) return;
    if (pos < 1) return;
    sz--;
    for (int i = pos; i <= sz; i++)
        a[i] = a[i + 1];
}
int check(LinkedListNode* head) {
    for (int i = 1; i <= sz; i++) {
        if (head == NULL) return 0;
        if (head->val != a[i]) return 0;
        head = head->next;
    }    
    if (head != NULL) return 0;
    return 1;
}
int main() {
    srand(time(NULL));
    int t, n; in(t); in(n);
    while (t--) {
        LinkedListNode* head = NULL;
        sz = 0;
        for (int i = 0; i < n; i++) {
            int type = rng(6);
            if (type == 0) {
                int val = rng(1000);
                head = insertAtBeginning(head, val);
                insertt(val, 1);
                if (!check(head)) {
                    printf("incorrect insertAtBeginning");
                    return 0;
                }
            }

            if (type == 1) {
                int val = rng(1000);
                head = insertAtEnd(head, val);
                insertt(val, sz + 1);
                if (!check(head)) {
                    printf("incorrect insertAtEnd");
                    return 0;
                }
            }

            if (type == 2) {
                int val = rng(1000);
                int pos = rng(sz + 1) + 1;
                head = insertAtPosition(head, val, pos);
                insertt(val, pos);
                if (!check(head)) {
                    printf("incorrect insertAtPosition");
                    return 0;
                }
            }

            if (type == 3) {
                head = deleteAtBeginning(head);
                erasee(1);
                if (!check(head)) {
                    printf("incorrect deleteAtBeginning");
                    return 0;
                }
            }

            if (type == 4) {
                head = deleteAtEnd(head);
                erasee(sz);
                if (!check(head)) {
                    printf("incorrect deleteAtEnd");
                    return 0;
                }
            }

            if (type == 5) {
                int pos = rng(sz)+1;
                head = deleteAtPosition(head, pos);
                erasee(pos);
                if (!check(head)) {
                    printf("incorrect deleteAtPosition");
                    return 0;
                }
            }
        }
    }
    printf("correct");
}