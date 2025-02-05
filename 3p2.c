//write a program to swap two no using pointer
#include<stdio.h>
int main(){
    int a,b,temp,*ptr1,*ptr2;

    printf("enter a:");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    ptr1=&a;
    ptr2=&b;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("after swapiing\n");
    printf("a :%d\n",*ptr1);
    printf("b :%d\n",*ptr2);
    return 0;
}
