#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    int*ptr;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("\nEntered no of element is:%d",n);
    ptr=(int*)malloc (n * sizeof (int));
    if(ptr == NULL)
    {
        printf("\nmemory allocation failed");
        exit(0);
    }
    else
    {
        printf("\nmemory allocation succesfully");
        for( i=0;i<n; i++)
        {
            ptr[i]=i+2;
        }
            printf("\nthe element of the array are:");
            for(i=0;i<n;i++)
            {
                printf("%d,",ptr[i]);
            }
        
        
        
    }
     // Print the address of the pointer itself
     printf("\nAddress of ptr: %p\n", (void *)&ptr);

     // Print the address stored in ptr (address of allocated memory)
     printf("\nAddress stored in ptr: %p\n", (void *)ptr);
 
    free(ptr);
    return 0;
}