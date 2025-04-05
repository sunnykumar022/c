/* create a structure named book to store book details TITLE ,Author, Price*/
#include<stdio.h>
struct book
{
    char title[100];
    char author[50];
    float price;
};

int main()
{
    /* input details of 3 books*/
    struct book b1[3];
    for(int i=0;i<3;i++)
    {
        printf("Enter title of book%d:", i+1);
        scanf("%s", b1[i].title);

        printf("\nEnter author of book%d:",i+1);
        scanf("%s",b1[i].author);

        printf("\nEnter price of book%d:", i+1);
        scanf("%f",&b1[i].price);
    }


//     /* find the most expensive and least expensive*/
//     float expensive=b1[0].price;
//     if(b1[1].price > expensive)
//     {
//         expensive=b1[1].price;
//     } ;
//     if(b1[2].price > expensive)
//     {
//         expensive = b1[2].price;
//     };


// float least_expensive = b1[0].price;
// if(b1[1].price < least_expensive)
// {
//     least_expensive = b1[1].price;
// };
// if(b1[2].price < least_expensive)
// {
//     least_expensive = b1[2].price;
// };
// prinf("\nmost expensive=%f",expensive);
// printf("\n Least expensive=%f",least_expensive);
    

    
    /* Find most expensive and least expensive books */
    float expensive = b1[0].price;
    float least_expensive = b1[0].price;

    for(int i = 1; i < 3; i++)
    {
        if(b1[i].price > expensive)
        {
            expensive = b1[i].price;
        }
        if(b1[i].price < least_expensive)
        {
            least_expensive = b1[i].price;
        }
    }

    printf("\nMost expensive book price: %.2f", expensive);
    printf("\nLeast expensive book price: %.2f", least_expensive);

    return 0;


}