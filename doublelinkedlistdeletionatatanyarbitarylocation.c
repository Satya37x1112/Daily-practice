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
void DeleteAtBeginning()
{
    if(start==NULL)
    {
        printf("List not found\n");
        return;
    }
    start=start->next;
    free(start->prev);
    start->prev=NULL;
}
void DeleteAtEnd()
{
    temp=start;
    struct Node* temp2;
    if(start==NULL)
    {
        printf("List not found\n");
        return;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp2=temp->prev;
    temp2->next=NULL;
    free(temp);
}
void DeleteAtanyarbitrarylocation()
{
    temp=start;
    struct Node *temp2,*temp3;
    int pos;
    int i=1;
    if(start==NULL)
    {
        printf("List Not found\n");
        return;
    }
    printf("Enter the location whose data is to be deleted\n");
    scanf("%d",&pos);
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp2=temp->prev;
    temp3=temp->next;
    temp2->next=temp3;
    temp3->prev=temp2;
    free(temp);
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
    printf("7 - DeleteAtBeginning\n");
    printf("8 - DeleteAtEnd\n");
    printf("9 - DeleteAtanyarbitrarylocation\n");
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
        case 7:
        DeleteAtBeginning();
        break;
        case 8:
        DeleteAtEnd();
        break;
        case 9:
        DeleteAtanyarbitrarylocation();
        break;
        default:
        printf("Invalid choice");
    }
    }
    return 0;
}