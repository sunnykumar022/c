#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    float sallary;
};
int main()
{
    struct employee e;
    struct employee *p=&e;

    printf("enter id: ");
    scanf("%d",&p->id);

    printf("enter name:");
    scanf("%s",p->name);

    printf("Enter sallary:");
    scanf("%f",&p->sallary);

    printf("\nemploy detail:\n");
    printf("id: %d\n", p->id);
    printf("name:%s\n", p->name);
    printf("sallary:%f",p->sallary);
    
}