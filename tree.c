// Online C compiler to run C program online 
// C code for inserting values into tree and performing the inorder,pre,post order traversal and printing the values.
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *left,*right;
};

struct node* create(){
    int x;
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the value to be inserted");
    scanf("%d",&x);
    if(x==-1)
    return 0;
    newnode->data=x;
    printf("Enter the left child of %d ",x);
    newnode->left=create();
    printf("Enter the right child of %d ",x);
    newnode->right=create();
    return newnode;
}

void preorder(struct node *root){
    if(root==0)
    return 0;
    printf("%d ",root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct node *root){
    if(root==0)
    return 0;
    
    inorder(root->left);
    printf("%d ",root->data);
    inorder(root->right);
}

void postorder(struct node *root){
    if(root==0)
    return 0;
    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->data);
}

int main() {
    struct node *root;
    root=create();
    preorder(root);
    inorder(root);
    postorder(root);
    return 0;
}