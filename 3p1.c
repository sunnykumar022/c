//demonstrate how to acess variable using pointer
#include<stdio.h>
int main(){
    int  i,*p;
    printf("enter i:");
    scanf("%d",&i);
    p=&i;
    printf("i=%d",*p);
return 0;
}