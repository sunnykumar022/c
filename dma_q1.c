/*c program to increase or decrease the size of an array*/
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int size,newSize,i;
    printf("Enter size :");
    scanf("%d",&size);
    int*ptr=(int*)malloc(size* sizeof(int));
   
   
    if(ptr==NULL)
    {
        printf("\nmemory allocation failed");
    }
    else
    {
        printf("\nMemory allocation successfull");

    }
    printf("\nEnter elements:\n");
    for(i=0; i<size; i++)
    {
       scanf("%d",&ptr[i]);
    }
    printf("\nbefore reallocation, elements are :");
    for(i=0; i<size; i++)
    {
        printf("%d,",ptr[i]);
    }
    printf("\nEnter newsize:\n");
    scanf("%d",&newSize);
    printf("\nEnter new elements:");
    ptr=(int*)realloc(ptr,newSize* sizeof(int));
    if (ptr == NULL) {
        printf("\nMemory reallocation failed");
        return 1;
    }
    for( i=size;i<newSize;i++)
    {
       scanf("%d",&ptr[i]);

    }
    printf("\nafter reallocation,elements are:");
    for( i=0;i<newSize;i++)
    {
        printf("%d",ptr[i]);

    }
    free(ptr);
    return 0;
}