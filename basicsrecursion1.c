#include<stdio.h>
void recursion(int a)
{
    if(a==0)
    {
       return;
    }
    printf("%d ",a);
    recursion(a-1);
}
int main()
{
    int a1=5;
    recursion(a1);
    return 0;
}