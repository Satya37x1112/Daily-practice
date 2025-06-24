#include<stdio.h>
void main()
{
    int arr[]={1,2,3,4,5};
    int los=0;
    int end=4;
    int mid,n,c=0;
    printf("Enter the number to be searched ");
    scanf("%d",&n);
    while(los<=end)
    {
        mid=(los+end)/2;
        if(arr[mid]==n)
        {
            printf("The element is found");
            c=1;
            break;
        }
        
        if(n<arr[mid])
        {
            end=mid-1;
        }
        else
        {
            los=mid+1;
        }
    }
    if(c==0)
    printf("Element not found");
}