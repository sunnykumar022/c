#include<stdio.h>
/*in struct data type we teke inpiut of students*/
struct student{
char name[50];
int id;
float marks[5];

};
int main(){
    /*take input from user*/
struct student s1;
printf("Enter student Details");
printf("\nEnter Name:");
scanf("%s",s1.name);
printf("\nEnter id:");
scanf("%d",&s1.id);
printf("\nMarks of sub1,sub2,sub3,sub4,sub5");
for(int i=0;i<5;i++){
    scanf("%f",&s1.marks[i]);
}
/*print the details of student*/
printf("\nstudents details:");
printf("\nName:%s",s1.name);
printf("\nId:%d",s1.id);
for(int i=0;i<5;i++){
    printf("\n marks of sub%d:%f",i+1,s1.marks[i]);
}
return 0;
}