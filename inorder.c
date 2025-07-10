#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
struct node* createNode(int info)
{
    struct node* new1=(struct node*) malloc (sizeof(struct node));
    new1->data=info;
    new1->right=NULL;
    new1->left=NULL;
    return new1;
}
void inorder(struct node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
int main()
{
    struct node* root=createNode(10);
    root->left=createNode(20);
    root->right=createNode(30);
    inorder(root);
    return 0;
}