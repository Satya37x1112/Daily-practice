#include<stdio.h>
void main()
{
    int arr[]={5,10,15,20,25};
    int key;
    int n,c=0;
    printf("Enter the number to be searched ");
    scanf("%d",&n);
    for(int i=0;i<5;i++)
    {
        if(arr[i]==n)
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        printf("The number is found");
    }
    else
    {
        printf("Dialed number does not exit");
    }
}