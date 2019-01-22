// Write a program to create a linked list with the given number of elements
// (follow the normal insertion process i.e., insert node at end evry time).
// If there are no elements given then the head of the linked list will be null. 
// After completing the insertion of all you will be given an element you have to search 
// for that element in the linked list. Display "yes" if it is found else "no".

// Note: Intially the linked list will be empty

// Input Format

// First Line contains number of elements(n) to be inserted and followed the n+1 elements the 
//(n+1)th element is the element to be searched

// Constraints

// 0<=n<=100

// 1<=element<=10000

// Output Format

// "yes" or "no"

// Sample Input 0

// 4
// 1
// 2
// 3
// 4
// 4
// Sample Output 0

// yes
// Explanation 0

// First 4 indicates the elements to be inserted followed by 4 elements to be inserted.         
//After insertion the list wil be 1->2->3->4->NULL

// The last 4 is the element to be searched. Since 4 is present in the list we have printed yes.



#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
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
int search(LinkedListNode* head,int ele) 
{
    int flag=0;
    LinkedListNode *temp = head;
    while(temp != NULL)
    {
        if(temp->val == ele)
        {
            flag=1;
            break;
        }
        temp=temp->next;
    }
    return flag;
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

    int ele;
    scanf("%d",&ele);
    int res = search(head,ele);
    if(res==1)
        printf("yes");
    else
        printf("no");
    return 0;
}

