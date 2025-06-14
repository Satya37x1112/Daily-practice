#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
int rear=-1;
int front=0;
int queue[MAXSIZE];
void Enqueue()
{
    if(rear==MAXSIZE-1)
    {
        printf("Queue is overflow\n");
        return;
    }
    int n;
    printf("Enter the element to be added ");
    scanf("%d",&n);
    rear++;
    queue[rear]=n;
}
void Dequeue()
{
    if(front>rear)
    {
        printf("Queue is underflow\n");
        return;
    }
    printf("The deleted element is %d",queue[front]);
    front++;
}
void display()
{
    if(front>rear)
    {
        printf("Queue is underflow\n");
        return;
    }
    printf("The elements are\n");
    for(int i=front;i<=rear;i++) 
    {
        printf("%d ",queue[i]);
    }

}
int main()
{
    while(1)
    {
        printf("\n------------QUEUE----------------\n");
        printf("Choose from\n");
        printf("1-Enqueue\n");
        printf("2-Dequeue\n");
        printf("3-Display\n");
        printf("4-Exit\n");
        int n;
        printf("Enter your Choice ");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            Enqueue();
            break;
            case 2:
            Dequeue();
            break;
            case 3:
            display();
            break;
            case 4:
            printf("Exiting...");
            exit(0);
        }
    }
    return 0;
}