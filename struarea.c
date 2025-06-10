/*Write a C program snippet that:

Defines a structure named Rectangle with:

length and breadth (both float)

Writes a function named area() that:

Takes a Rectangle structure as an argument

Returns the area as a float

In main():

Ask the user to input length and breadth

Call the area() function

Print the result*/
#include <stdio.h>
struct Rectangle{
    float length;
    float breadth;
};struct Rectangle r; 
float area(struct Rectangle r)
{
    return r.length*r.breadth;  
}
void main()
{
    
    printf("Enter length of the rectangle ");
    scanf("%f",&r.length);
    printf("Enter breath of the rectangle ");
    scanf("%f",&r.breadth);
    printf("The length is %f and breath is %f  ",r.length,r.breadth);
    float result = area(r);
    printf("\n%f is the area of the rectangle",result);
}