// Height of a Binary Search Tree

// You are given N values to be inserted into a binary search tree. Every value in the left subtree fo a node x must be less than or equal to x and every value in the right subtree of a node x must be greater than x. 
// You are to insert the N values into a binary search tree in the order that they are given. Print the resultant binary search tree's height.

// Input Format

// First line contains a number N. Next line contains N integers.

// Constraints

// 1 <= N <= 1000

// Output Format

// Output one integer that is the height of the binary search tree.

// Sample Input 0

// 10
// 2 8 5 1 10 5 9 9 3 5 
// Sample Output 0

// 6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>
#define scan(x) scanf(" %d", &x)
struct TreeNode {
    int x;
    struct TreeNode* L;
    struct TreeNode* R;
};
typedef struct TreeNode TreeNode;
TreeNode* newNode(int _x) {
    TreeNode* node = (TreeNode*) malloc(sizeof(TreeNode));
    node->x = _x;
    node->L = node->R = NULL;
    return node;
}
TreeNode* insert(TreeNode* node, int val) {
    if (node == NULL) return newNode(val);
    if (val <= node->x) node->L = insert(node->L, val);
    else node->R = insert(node->R, val);
    return node;
}

/*******************************************************************/

int height(TreeNode* Root)
{
    // Your code here
    if(Root==NULL)
         return 0;
    else
        return (int)(fmax(height(Root->L),height(Root->R))+1);
}

void preorder(TreeNode* Root)
{
    if(Root==NULL)
         return;
    int h = height(Root);
    printf("%d",h);
}

/*******************************************************************/

int main() {
    int val, N; scan(N);
    TreeNode* Root = NULL;
    for (int i = 1; i <= N; i++) {
        scan(val);
        Root = insert(Root, val);
    }
    preorder(Root);
}