#include<stdio.h>
void main (){
    int arr[5][5],b[5][5], i,j,rows,cols;
    printf("Enter rows : ");
    scanf("%d", &rows);
    printf("Enter columns : ");
    scanf("%d", &cols);
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("Enter elements of matrics at [%d,%d] = ",i+1,j+1);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Given matrix : \n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            printf("%d ",arr[i][j]);
            
        }
        printf("\n");
    }

    for(i = 0; i < rows; i++){
        for(j=0; j<cols; j++){
             b[j][i]=arr[i][j];
        }
    }
    printf("Transpose of the matrix is : \n");
    for(j=0; j<rows; j++){
        for(i = 0; i < cols; i++){
            printf("%d ", b[j][i]);
          
        }
          printf("\n");
    }

}