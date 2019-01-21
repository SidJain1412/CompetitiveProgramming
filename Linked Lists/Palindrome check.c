// Our beloved Harry has just turned 11. 
// He received his acceptance letter to Hogwarts after being greeted by Hagrid with "You're a wizard Harry".

// One his way to Diagon-Alley he ponders upon Hagrid's words and notices how the string "You're a wizard Harry" is not a palindrome.

// He decides thinking is a waste of time and hence wants you to design a function for him 
// that takes as parameter the head node to a linked list of characters such that the entire
// list collectively denotes Hagrid's sentences and returns True if the sentence was a palindrome and False otherwise.

// NOTE : Do not edit the head or the tail of the code. You are only allowed to edit the body

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
typedef struct LinkedListNode LinkedListNode;

struct LinkedListNode {
    char val;
    LinkedListNode *next;
};

LinkedListNode* _insert_node_into_singlylinkedlist(LinkedListNode *head, LinkedListNode *tail, char val) {
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
    char val;
    LinkedListNode *next;
};
*/
bool isPalindrome(LinkedListNode* head) 
{
    LinkedListNode *top=NULL;
    LinkedListNode *ptr;
    ptr=head;
    while(ptr!=NULL)
    {
        LinkedListNode *new = (LinkedListNode *) (malloc(sizeof(LinkedListNode)));
        if(top==NULL)
        {
            new->val = ptr->val;
            new->next=NULL;
            top=new;
        }
        else
        {
            new->val = ptr->val;
            new->next=top;
            top=new;
        }
        ptr=ptr->next;
    }
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->val == top->val)
        {
            top=top->next;
            ptr=ptr->next;
        }
        else
            return false;
    }
        return true;
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

    scanf("%d", &head_size);
 	char s[10005];
  	scanf(" %s", s);
    for(int i = 0; i < head_size; i++) {
        char head_item = s[i];
        head_tail = _insert_node_into_singlylinkedlist(head, head_tail, head_item);

        if(i == 0) {
            head = head_tail;
        }
    }


    res = isPalindrome(head);
    fprintf(f, "%d\n", res);

    fclose(f);
    return 0;
}
