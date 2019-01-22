// Harry is exploring the chamber of secrets to find his best friend Ron's sister Ginny. 
// Harry realises that the chamber of secrets is like a singly linked list.

// Walking forward in the chamber of secrets is comparable to iterating to the next element in a linked list.

// Harry feels like he has been walking for a while now and wonders if this chamber 
// of secrets ever ends or if he will continue to walk forever.

// Formally, write a function that takes as input the head node of a linked list and returns 
// True if the list has a cycle and False if the list terminates.

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
bool hasCycle(LinkedListNode* head) 
{   
    if(head==NULL)
        return 0;
    LinkedListNode *s,*f;
    s=head;
    f=head;
    do
    {
        if(s->next==NULL || f->next->next==NULL)
            return 0;
        s=s->next;
        f=f->next->next;
    }while(f!=s);
    
    return 1;
}

int main()
{
    FILE *f = stdout;
    char *output_path = getenv("OUTPUT_PATH");
    if (output_path) {
        f = fopen(output_path, "w");
    }

    bool res;
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
	int x;
  	scanf("%d", &x);
  	if (x > -1)
    {
      	LinkedListNode* ptr = head;
      	while (x--) ptr = ptr->next;
      	head_tail->next = ptr;
    }

    res = hasCycle(head);
    fprintf(f, "%d\n", res);

    fclose(f);
    return 0;
}
