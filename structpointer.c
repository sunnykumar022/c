#include<stdio.h>
struct employee
{
    /* data */
   int id;
    char name[20];
    float sallary;
};
int main()
{
    struct employee e[3];
    for(int i=0; i<3;i++)
    {
        printf("Enter id of e%d:",i);
        scanf("%d", &e[i].id);
        printf("enter name of e%d:",i);
        scanf("%s", &e[i].name);
        printf("enter sallary of e%d:",i);
        scanf("%f", &e[i].sallary);
    }
    printf("\nEmployee Details:\n");
    for(int i = 0; i < 3; i++)
    {
        printf("ID: %d\n", e[i].id);
        printf("Name: %s\n", e[i].name);
        printf("Salary: %.2f\n", e[i].sallary);
        printf("\n");
    }

return 0;
    
}
