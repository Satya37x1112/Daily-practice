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
void InsertAtEnd()
{
    if(start==NULL)
    {
        printf("List not found");
    }
    temp=start;
    new1=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data for the new node ");
    scanf("%d",&new1->data);
    while((temp->next)!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new1;
    new1->prev=temp;
    new1->next=NULL;
}
void InserAtMiddle()
{
    int pos,i=1;
    new1=(struct Node *)malloc(sizeof(struct Node));
    struct Node *tempnext,*tempprev;
    tempnext=start;
    if(start==NULL)
    {
        printf("List not found");
    }
    printf("Enter the postion where the new node data is to be inserted ");
    scanf("%d",&pos);
    printf("Enter the data to be inserted in the new node ");
    scanf("%d",&new1->data);
    while(i<pos)
    {
        tempprev=tempnext;
        tempnext=tempnext->next;
        i++;
    }
    new1->prev=tempprev;
    new1->next=tempnext;
    tempprev->next=new1;
    if(tempnext!=NULL)
    {
        tempnext->prev=NULL;
    }
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
    printf("5 - InsertAtEnd\n");
    printf("6 - InserAtMiddle\n");
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
        case 5:
        InsertAtEnd();
        break;
        case 6:
        InserAtMiddle();
        break;
        default:
        printf("Invalid choice");
    }
    }
    return 0;
}