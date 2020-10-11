/* Given two strings for inorder and preorder traversals.
Print the postorder traversal result from the above two strings.

First string is inorder traversal result, while second one is preorder traversal result.

Sample Input:-
DBEAFC
ABDECF

Sample Output:-
DEBFCA  */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
typedef struct tree tree;
struct tree
{
    char data;
    tree *left;
    tree *right;
};
int search(char ch[], int start, int end, char value)
{
    int i,idx;
    for(i=start;i<=end;i++)
        if(ch[i]==value)
        {
            idx=i;
            break;
        }
    return idx;
}
tree *newval(char val)
{
    tree *node= (tree *)malloc(sizeof(tree));
    node->data=val;
    node->left=NULL;
    node->right=NULL;
    return node;
}
tree *buildtree(char in[], char pre[], int start, int end)
{
    if(start>end)
        return NULL;
    static int preidx=0;
    tree *node= newval(pre[preidx++]);
    if(start==end)
        return node;
    int inidx= search(in,start, end,node->data);
    node->left= buildtree(in,pre,start,inidx-1);
    node->right= buildtree(in,pre,inidx+1,end);
    return node;
}
void postorder(tree *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        cout<<root->data;
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char pre[100],in[100];
    cin>>in>>pre;
    int len=strlen(in);
    tree *root = buildtree(in,pre,0,len-1);
    postorder(root);
    return 0;
}
