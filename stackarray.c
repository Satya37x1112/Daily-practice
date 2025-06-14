#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
int top=-1;
int stack[MAXSIZE];
void push()
{
    if(top==MAXSIZE-1)
    {
        printf("Stack Overflow");
        return;
    }
    top++;
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    stack[top]=n;
}
void pop()
{
    if(top==-1)
    {
        printf("Stack is underflow");
        return;
    }
    printf("The deleted element is %d ",stack[top]);
    top--;

}
void display()
{
    if(top==-1)
    {
        printf("Stack is underflow");
        return;
    }
    printf("The elements of stack are\n");
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
}
void peek()
{
    if(top==-1)
    {
        printf("Stack is underflow");
        return;
    }
    printf("The topmost element is %d ",stack[top]);
}
int main()
{
    int n;
    while(1)
    {
    printf("\n------STACK MENU----------\n");
    printf("Choose from\n");
    printf("1-Push the element\n");
    printf("2-Pop the element\n");
    printf("3-Display the elements\n");
    printf("4-Peek the topmost element\n");
    printf("5-Exit\n");
    printf("Enter your choice\n");
    scanf("%d",&n);
    switch(n)
    {
        case 1:
        push();
        break;
        case 2:
        pop();
        break;
        case 3:
        display();
        break;
        case 4:
        peek();
        break;
        case 5:
        printf("Exiting...");
        exit(0);
        break;
        default:
        printf("Invalid choice");
    }
    }
    return 0;
}