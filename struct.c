 #include<stdio.h>
 struct employee
 {
    char name[20];
    long long int id;
    float sallary;
};
int main(){
 struct employee emp1={"sunny",2403051050890,200000};

struct employee emp2 ={"manish", 27062578568706,1000000};

struct employee emp3 ={"babby",2837503 ,10000000};
printf("Employee details: \n");
printf("Name:%s\n",emp1.name);
printf("id:%lld\n",emp1.id);
printf("sallary:%f\n",emp1.sallary);
printf("Employee details: \n");
printf("Name:%s\n",emp2.name);
printf("id:%lld\n",emp2.id);
printf("sallary:%f\n",emp2.sallary);
struct employee emp4;

printf("enter name");
scanf("%s\n",emp4.name);
printf("enter id :");
scanf("%d",&emp4.name);

return 0;
}