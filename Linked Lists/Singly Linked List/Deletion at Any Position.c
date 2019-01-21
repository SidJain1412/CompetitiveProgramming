// Write a program to create a linked list with the given number of elements
// (follow the normal insertion process i.e., insert node at end evry time).
// If there are no elements given then the head of the linked list will be null. 
// After completing the insertion of all you will be given a value of "k". 
// Perform the deletion at k position. Print the elements in the linked list after successful completion of deletion.

// Note: Intially the linked list will be empty. The k value always will be less 
// than no.of elements in the list.Assume that A position of 0 indicates head, a position 
// of 1 indicates one node away from the head and so on

// Input Format

// First Line contains number of elements(n) to be inserted and followed the n+1 elements the (n+1)th element denotes k value

// Constraints

// 0<=n<=100

// 1<=element<=10000

// 0<=k<=1000

// Output Format

// Print the elements in the linked list

// Sample Input 0

// 4
// 1
// 2
// 3
// 4
// 1
// Sample Output 0

// 1->3->4
// Explanation 0

// After successful insertion the list will be like 1->2->3->4->NULL

// The given k value is 2.After successful deletion of data at position-1 i.e., 2  will become 1->3->4->NULL



#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct LinkedListNode LinkedListNode;

struct LinkedListNode {
    int val;
    LinkedListNode *next;
};

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, LinkedListNode *tail, int val) {
    if(head == NULL) {
        head = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        head->val = val;
        head->next = NULL;
        tail = head;
    }
    else {
        LinkedListNode *node = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        node->val = val;
        node->next = NULL;
        tail->next = node;
        tail = tail->next;
    }
    return tail;
}

// BODY STARTS HERE


/*
 * Complete the function below.
 */
/*
For your reference:
LinkedListNode {
    int val;
    LinkedListNode *next;
};
*/
LinkedListNode* del(LinkedListNode* head, int pos) 
{
    LinkedListNode *ptr = head;
    int count=0;
    while(ptr)
    {
        count++;
        if(pos==count)
        {
            ptr->next = ptr->next->next;
            break;
        }
        ptr = ptr->next;
    }
    return head;
}

//BODY ENDS HERE

int main()
{
    int head_size = 0;

    LinkedListNode* head = NULL;
    LinkedListNode* head_tail = NULL;

    scanf("%d\n", &head_size);
    for(int i = 0; i < head_size; i++) {
        int head_item;
        scanf("%d", &head_item);
        head_tail = _insert_node_into_singlylinkedlist(head, head_tail, head_item);

        if(i == 0) {
            head = head_tail;
        }
    }
    int pos;
    scanf("%d",&pos);
    head = del(head,pos);
    
    while(head->next != NULL)
    {
        printf("%d->",head->val);
        head = head->next;
    }
    printf("%d",head->val);
    return 0;
}
