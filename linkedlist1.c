/*Write a C program snippet that:

Defines a struct Node with:

An int data member

A struct Node* next pointer

In main():

Dynamically allocate memory for a single node

Set the data to a value entered by the user

Set the next pointer to NULL

Print the value stored and confirm that next is NULL*/
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
void main()
{
    struct Node *r=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value ");
    scanf("%d",&r->data);
    r->next=NULL;
    printf("%d\n",r->data);
    printf("%p",(void *)r->next);
}