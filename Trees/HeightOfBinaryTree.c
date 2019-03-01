// Output Format

// Output one integer that is the height of the binary search tree.

// Sample Input 0
// 10
// 2 8 5 1 10 5 9 9 3 5 

// Sample Output 0
// 6


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct TreeNode{
    int x;
    struct TreeNode* L;
    struct TreeNode* R;
};

typedef struct TreeNode TreeNode;

TreeNode* newNode(int y){
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->x = y;
    node->L = node->R = NULL;
    return node;
}

int height(TreeNode *root){
    if(root==NULL)
        return 0;
    else{
        int ldepth = height(root->L);
        int rdepth = height(root->R);
        if(ldepth>rdepth)
        {
            return ldepth+1;
        }
        else
            return rdepth+1;
    }
}

TreeNode* insert(TreeNode* node, int val)
{
    if(node==NULL) return newNode(val);
    if(val<=node->x){
        node->L = insert(node->L, val);
    }else{
        node->R = insert(node->R, val);
    }
    return node;
}

int main() {
    int val, N;
    scanf("%d", &N);
    TreeNode* Root= NULL;
    for(int i=1;i<=N; i++){
        scanf("%d", &val);
        Root = insert(Root, val);
    }
    printf("%d", height(Root));
    return 0;
}
