// Program to print inorder, preorder and postorder of the given tree and also find the height of the tree recursively

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

Node* insert(Node* root, int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    if(root==NULL)
        return newNode;
    else if(data<root->data)
        root->left = insert(root->left, data);
    else
        root->right = insert(root->right, data);
    return root;
}

void inorder(Node* root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<"->";
    inorder(root->right);
}

void preorder(Node* root)
{
    if(root==NULL)
        return;
    cout<<root->data<<"->";
    preorder(root->left);
    preorder(root->right);
}

void postorder(Node* root)
{
    if(root==NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"->";
}

int height(Node *root){
    if(root==NULL)
        return 0;
    else
    {
        int ldepth = height(root->left);
        int rdepth = height(root->right);
        if(ldepth>rdepth)
            return ldepth+1;
        else
            return rdepth+1;
    }
}

int main() 
{
    cout<<"This is my 1st tree program!"<<endl;
    Node* root = NULL;
    root = insert(root, 3);
    root = insert(root, 2);
    root = insert(root, 1);
    root = insert(root, 4);
    root = insert(root, 5);
    int h = height(root);
    cout<<"Inorder:"<<endl;
    inorder(root);
    cout<<endl<<"Postorder:"<<endl;
    postorder(root);
    cout<<endl<<"Preorder:"<<endl;
    preorder(root);
    cout<<"Height of tree:"<<h<<endl;
    return 0;
}