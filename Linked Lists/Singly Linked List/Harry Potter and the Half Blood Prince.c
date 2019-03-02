/* Harry Potter has now learned about the elder wand which is the strongest wand in the wizarding world.
Harry realises that the elder want can be represented as a linked list of integers. (Wow, Just Wow).
Harry realises that it could be devastating if this wand went into wrong hands and decides to mess with it.
He wants to reverse a part of this wand. Harry has the idea and you are the executioner. Help him.

Harry tells you the positions on the elder wand, the starting point and the ending point to the section in the wand that is to be reversed.

Formally, Write a function that reverses a linked list from index n to index m.

For example: Given 1->2->3->4->5->NULL, m = 2 and n = 4,

return 1->4->3->2->5->NULL.

Constraints

Your algorithm must be linear in time complexity. */




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

struct LinkedListNode * reverse(struct LinkedListNode * head)
{
    struct LinkedListNode* prev = NULL;
    struct LinkedListNode* curr = head;

    while (curr) {
        struct LinkedListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

LinkedListNode* reverseSublist(LinkedListNode* head, int m, int k) {
    if (m == k)
        return head;

    struct LinkedListNode * revs = NULL, *revs_prev = NULL;
    struct LinkedListNode * revend = NULL, *revend_next = NULL;


    int i = 1;
    struct LinkedListNode * curr = head;
    while (curr && i <= k) {
        if (i < m)
            revs_prev = curr;

        if (i == m)
            revs = curr;

        if (i == k) {
            revend = curr;
            revend_next = curr->next;
        }

        curr = curr->next;
        i++;
    }
    revend->next = NULL;

    revend = reverse(revs);

    if (revs_prev)
        revs_prev->next = revend;

    else
        head = revend;

    revs->next = revend_next;
    return head;

}

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


    int k;
    scanf("%d", &k);

    int m;
    scanf("%d", &m);

    res = reverseSublist(head, k, m);
    while (res != NULL) {
        fprintf(f, "%d ", res->val);

        res = res->next;
    }

    fclose(f);
    return 0;
}
