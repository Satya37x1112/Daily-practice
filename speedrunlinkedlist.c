#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *add;
};struct node *start,*new1,*temp;
void create()
{
    int i=1;
    char ch;
    start=(struct node *)malloc(sizeof(struct node));
    printf("Enter the data for node %d ",i);
    scanf("%d",&start->data);
    start->add=NULL;
    temp=start;
    while(getchar()!='\n');
    printf("Do you want to continue (Y or N) ");
    ch=getchar();
    while(ch=='y' || ch=='Y')
    {
        i++;
        new1=(struct node *)malloc(sizeof(struct node));
        printf("Enter the data for node %d ",i);
        scanf("%d",&new1->data);
        new1->add=NULL;
        temp->add=new1;
        temp=temp->add;
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
    else
    {
        temp=start;
        printf("The data of the nodes are \n");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->add;      
        }
        
       
    }
}
int main()
{
    int n;
    while(1)
    {
    printf("\n-----The Linked List menu--------\n");
    printf("1-Create a node\n");
    printf("2-Display a node\n");
    printf("3-Exit\n");
    printf("Enter your choice ");
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
        printf("Exiting...\n");
        exit(0);
        break;
        default:
        printf("Invalid choice");
    }

}
return 0;
}