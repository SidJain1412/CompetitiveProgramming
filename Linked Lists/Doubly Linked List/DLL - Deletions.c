/*
	You will be implementing functions to delete nodes from a doubly linkedlist.

	The following is the structure of the linked list node :

	struct LinkedListNode {
		int val;
	    struct LinkedListNode* next;
	    struct LinkedListNode* prev;
	};
	typedef struct LinkedListNode LinkedListNode;
*/
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
	struct LinkedListNode* prev;
};


//-------------------- body of the code ------------------------


LinkedListNode* insertAtBeginning(LinkedListNode* head, int val) {
    if(head){
        LinkedListNode* temp = (LinkedListNode*)malloc(sizeof(LinkedListNode));
        temp -> val = val;
        temp -> next = head;
        temp -> prev = NULL;
        head -> prev = temp;
        head = temp;
    }
    else{
        head = (LinkedListNode*)malloc(sizeof(LinkedListNode));
        head -> val = val;
        head -> next = NULL;
        head -> prev = NULL;
    }
    return head;
}

LinkedListNode* insertAtEnd(LinkedListNode* head, int val) {
    if(head){
        LinkedListNode* pointer = head;
        LinkedListNode* temp = (LinkedListNode*)malloc(sizeof(LinkedListNode));
        while(pointer -> next)
            pointer = pointer -> next;
        temp -> val = val;
        temp -> next = NULL;
        temp -> prev = pointer;
        pointer -> next = temp;
    }
    else{
        head = (LinkedListNode*)malloc(sizeof(LinkedListNode));
        head -> val = val;
        head -> next = NULL;
        head -> prev = NULL;
    }
    return head;
}

LinkedListNode* insertAtPosition(LinkedListNode* head, int val, int pos) {
    if(head){
        if(pos>1){
            LinkedListNode* pointer = head;
            LinkedListNode* temp = (LinkedListNode*)malloc(sizeof(LinkedListNode));
            for(int i=1; i<pos-1; ++i)
                pointer = pointer -> next;
            temp -> val = val;
            temp -> next = pointer -> next;
            temp -> prev = pointer;
            if(temp -> next)
                temp -> next -> prev = temp;
            pointer -> next = temp;
        }
        else{
            LinkedListNode* temp = (LinkedListNode*)malloc(sizeof(LinkedListNode));
            temp -> val = val;
            temp -> next = head;
            temp -> prev = NULL;
            head -> prev = temp;
            head = temp;
        }
    }
    else{
        head = (LinkedListNode*)malloc(sizeof(LinkedListNode));
        head -> val = val;
        head -> prev = NULL;
        head -> next = NULL;
    }
    return head;
}

LinkedListNode* deleteAtBeginning(LinkedListNode* head) {
    if(head){
        LinkedListNode* temp = head;
        head = head -> next;
        if(head)
            head -> prev = NULL;
        else
            head = NULL;
        free(temp);
    }
    else{
        free(head);
        return NULL;
    }
    return head;
}

LinkedListNode* deleteAtEnd(LinkedListNode* head) {
    if(head){
        if(head -> next){
            LinkedListNode* pointer = head;
            while(pointer -> next)
                pointer = pointer -> next;
                pointer -> prev -> next = NULL;
                free(pointer);
        }
        else{
            free(head);
            return NULL;
        }
    }
    return head;
}

LinkedListNode* deleteAtPosition(LinkedListNode* head, int pos) {
    if(head){
        if(pos>1){
            LinkedListNode* pointer = head;
            for(int i=1; i<pos; ++i)
                pointer = pointer -> next;
            pointer -> prev -> next = pointer -> next;
            if(pointer -> next)
                pointer -> next -> prev = pointer -> prev;
            free(pointer);
        }
        else{
            LinkedListNode* pointer = head;
            head = head -> next;
            if(head)
                head -> prev = NULL;
            else
                head = NULL;
            free(pointer);
        }
    }
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
	if (head == NULL && sz == 0) return 1;
	if (head == NULL || sz == 0) return 0;
	LinkedListNode* node = head;
	for (int i = 1; i <= sz; i++) {
		if (node == NULL) return 0;
		if (node->val != a[i]) return 0;
		node = node->next;
	}	
	if (node != NULL) return 0;

	node = head;
	while (node->next)
		node = node->next;

	for (int i = sz; i >= 1; i--) {
		if (node == NULL) return 0;
		if (node->val != a[i]) return 0;
		node = node->prev;
	}
	if (node != NULL) return 0;
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