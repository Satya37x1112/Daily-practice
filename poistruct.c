/*Write a C program that:

Defines a structure Rectangle with:

length and breadth as float

Declares a function:

Named area()

That takes a pointer to a Rectangle as an argument

Returns the area as a float

In main():

Ask the user for input

Pass the address of the structure to area()

Print the result
*/
#include <stdio.h>
#include <stdlib.h>
struct Rectangle{
    float length;
    float breadth;
};
float area(struct Rectangle *r)
{
    return r->length*r->breadth;
}
void main()
{
    struct Rectangle *r=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    printf("Enter length of the rectangle ");
    scanf("%f",&r->length);
    printf("Enter breath of the recatngle ");
    scanf("%f",&r->breadth);
    float result=area(r);
    printf("The area of the rectangle is %f",result);
}