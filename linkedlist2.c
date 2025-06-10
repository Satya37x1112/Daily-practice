/*Write a C program that:

Defines a struct Node with:

An int data member

A struct Node* next pointer

In main():

Dynamically allocate memory for two nodes: node1 and node2

Ask the user to enter data for both nodes

Set node1->next to point to node2

Set node2->next to NULL

Print:

The data in node1 and its next

The data in node2 and its next

*/
#include <stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main()
{
    struct Node *node1=(struct Node *)malloc(sizeof(struct Node));
    struct Node *node2=(struct Node *)malloc(sizeof(struct Node));
    printf("enter the data for the 1st node ");
    scanf("%d",&node1->data);
    printf("enter the data for the 2nd node ");
    scanf("%d",&node2->data);
    node1->next=node2;
    node2->next=NULL;
    printf("node 1 data is %d and address is %p\n",node1->data,node1->next);
    printf("node 2 data is %d and address is %p",node2->data,node2->next);
    free(node1);
    free(node2);
    return 0;
}