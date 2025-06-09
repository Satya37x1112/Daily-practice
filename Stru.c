/*Write a C program snippet that:

Declares a structure named Book with the following members:

title (a string of up to 50 characters)

author (a string of up to 50 characters)

price (a float)

Creates a variable b1 of type Book and assigns values to each member.

Prints the values of b1.*/
#include <stdio.h>
struct book
{
    char *title;
    char *author;
    float price;
}book;
void main()
{
    book.title="Data Structure and Algorithms";
    book.author="PV Narshima";
    book.price=500.5;
    printf("%s\n",book.title);
    printf("%s\n",book.author);
    printf("%f\n",book.price);
    
}