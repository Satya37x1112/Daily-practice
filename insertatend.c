#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *add;
};struct Node *start,*temp,*new1;
void create()
{
    char ch;
    int i=1;
    start=(struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data of the %d node ",i);
    scanf("%d",&start->data);
    start->add=NULL;
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
        temp->add=new1;
        new1->add=NULL;
        temp=temp->add;
        while(getchar()!='\n');
        printf("Do u want to continue Y or N ");
        ch=getchar();
        }
       
    }
}
void display()
{
    temp=start;
    printf("The data are\n");
    if(start==NULL)
    {
    printf("Invalid Operation");
    }
    else
    {
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->add;
        }
    }
}
void Insertbeginning()
{
    if(start==NULL)
    {
        printf("List not found");
    }
    else
    {
        new1=(struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data to be inserted in the beginning ");
        scanf("%d",&new1->data);
        new1->add=NULL;
        new1->add=start;
        start=new1;
    }
}
void Insertatend()
{
    if(start==NULL)
    {
        printf("List not found");
    }
    else
    {
        new1=(struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data to be inserted at the end position of the list ");
        scanf("%d",&new1->data);
        new1->add=NULL;
        temp=start;
        while((temp->add)!=NULL)
        {
            temp=temp->add;
        }
        temp->add=new1;
    }
}
int main() {
    int n;

    while (1) {
        printf("\n----- Linked List Menu -------\n");
        printf("1 - Create\n");
        printf("2 - Display\n");
        printf("3 - Exit\n");
        printf("4 - Insert at beginning\n");
        printf("5 - Insert at end\n");
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
            case 4:
                Insertbeginning();
                break;
            case 5:
                Insertatend();
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}
