// You’re given the pointer to the head node of a linked list. Change the next pointers of the nodes 
// so that their order is reversed. The head pointer given may be null meaning that the initial list is empty.

// Input Format

// You have to complete the LinkedListNode* Reverse(LinkedListNode* head) method which takes one argument - 
// the head of the linked list. You should NOT read any input from stdin/console.

// Output Format

// Change the next pointers of the nodes that their order is reversed and return the head of the reversed linked list. 
// Do NOT print anything to stdout/console.


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
LinkedListNode* Reverse(LinkedListNode* head) 
{
    LinkedListNode *temp=head;
    LinkedListNode *r,*s;
    r=NULL;
    while(temp!=NULL)
    {
        s=r;
        r=temp;
        temp=temp->next;
        r->next=s;
    }
    head=r;
    return head;
}

//BODY ENDS HERE

int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        f = fopen(output_path, "w");
    }

    LinkedListNode* res;
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


    res = Reverse(head);
    while (res != NULL) {
        fprintf(f, "%d ", res->val);

        res = res->next;
    }

    fclose(f);
    return 0;
}
