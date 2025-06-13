#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
};
struct Node *start,*temp,*new1;
void create()
{
    int i=1;
    char ch;
    start=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data for node %d ",i);
    scanf("%d",&start->data);
    start->prev=NULL;
    start->next=NULL;
    temp=start;
    while(getchar()!='\n');
    printf("Do you want to continue (Y or N) ");
    ch=getchar();
    while(ch=='y' || ch=='Y')
    {
        i++;
        new1=(struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data for the node %d ",i);
        scanf("%d",&new1->data);
        temp->next=new1;
        new1->prev=temp;
        new1->next=NULL;
        temp=temp->next;
        while(getchar()!='\n');
        printf("Do you want to continue (Y or N) ");
        ch=getchar();

    }
}
void display()
{
    
    if(start==NULL)
    {
        printf("List not found");
    }
    temp=start;
    printf("The data are\n");
    while((temp!=NULL))
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
}
void InsertAtbeginning()
{
    if(start==NULL)
    {
        printf("List not found");
    }
    new1=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data for the new node ");
    scanf("%d",&new1->data);
    new1->prev=NULL;
    new1->next=start;
    start->prev=new1;
    start=new1;
}
int main()
{
    int n;
    while(1)
    {
    printf("\n-------Double Linked List menu-----------\n");
    printf("Choose from\n");
    printf("1 - Create\n");
    printf("2 - Display\n");
    printf("3 - Exit\n");
    printf("4 - InsertAtbeginning\n");
    printf("Enter your choice\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        create();
        break;
        case 2:
        display();
        break;
        case 3:
        printf("Exiting...");
        exit(0);
        break;
        case 4:
        InsertAtbeginning();
        break;
        default:
        printf("Invalid choice");
    }
    }
    return 0;
}