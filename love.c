#include<stdio.h>
void love(int i)
{
    if(i==0)
    {
        return;
    }
    printf("very ");
    i--;
    love(i);
}
int main()
{
    int i1;
    printf("How much strong is your love (1-10) ");
    scanf("%d",&i1);
    printf("I love you ");
    love(i1);
    printf("much");
    return 0;
}