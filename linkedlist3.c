/*Write a C program that:

Defines a struct Node with:

int data

struct Node* next

In main():

Ask the user for the number of nodes (n)

Use a loop to:

Dynamically allocate each node

Input its data from the user

Link it to the previous node

After building the list, traverse it and print:

Each node’s data

The address it points to (i.e., next)

*/
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};struct Node *start,*temp,*new1;
void create()
{
    char ch;
    int i=1;
    start=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data of the %d node ",i);
    scanf("%d",&start->data);
    start->next=NULL;
    temp=start;
    while(getchar()!='\n');
    printf("Do u want to continue Y or N ");
    ch=getchar();
    while(ch=='y' || ch=='Y')
    {
        i++;
        new1=(struct Node *)malloc(sizeof(struct Node));
        if(start==NULL)
        {
            printf("Invalid Operation");
        }
        else
        {
        printf("Enter the data for the %d node ",i);
        scanf("%d",&new1->data);
        temp->next=new1;
        new1->next=NULL;
        temp=temp->next;
        while(getchar()!='\n');
        printf("Do u want to continue Y or N ");
        ch=getchar();
        }
       
    }
}
void display()
{
    struct Node *ptr=start;
    printf("The data are\n");
    if(start==NULL)
    {
    printf("Invalid Operation");
    }
    else
    {
        while(ptr!=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
    }
}
int main() {
    int n;

    while (1) {
        printf("\n----- Linked List Menu -------\n");
        printf("1 - Create\n");
        printf("2 - Display\n");
        printf("3 - Exit\n");
        printf("Enter your Choice: ");
        scanf("%d", &n);

        switch (n) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                printf("Exiting program.\n");
                exit(0);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
