#include<stdio.h>
#include<string.h>
union student
{
    int rollno;
    char name[50];
    float marks;
};
int main()
{
    union student s;
    s.rollno =32;
    printf("%d",s.rollno);
     strcpy(s.name,"sunny");
    printf("\n%s",s.name);
    s.marks= 90.5;
    printf("\n%2f",s.marks);
    return 0;
}