// You are given the pointer to the head node of a linked list and you need to print all its elements in reverse order 
// from tail to head, on one line separated by space. The head pointer may be null meaning that the list 
// is empty - in that case, do not print anything!

// Input Format

// You have to complete the void ReversePrint(LinkedListNode* head) method which takes one argument
// - the head of the linked list. You should NOT read any input from stdin/console.

// Output Format

// Print the elements of the linked list in reverse order to stdout/console (using printf or cout) , separated by a space.

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

//BODY STARTS HERE


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
void ReversePrint(LinkedListNode* head) {

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


    ReversePrint(head);
    
    return 0;
}
