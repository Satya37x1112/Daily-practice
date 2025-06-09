/*Write a C program snippet that:

Defines a structure Student with the following members:

name (string up to 30 characters)

roll (integer)

marks (float)

Declares an array of 3 students.

Uses a loop to input data for all 3 students.

Uses another loop to print the details of each student.

*/
#include<stdio.h>
struct student {
    char name[30];
    int roll;
    float marks;
};
void main(){
struct student s[3];
for(int i=0;i<3;i++)
{
    printf("Enter name STUDENT %d ",i+1);
    scanf("%s",&s[i].name);
    printf("Enter roll ");
    scanf("%d",&s[i].roll);
    printf("Enter marks ");
    scanf("%f",&s[i].marks);
}
printf("The Data of the following students are");
for(int i=0;i<3;i++)
{
    printf("%s\n",s[i].name);
    printf("%d\n",s[i].roll);
    printf("%f\n",s[i].marks);
}
}