#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, size, newSize, i;

    // Ask user for initial size of array
    printf("Enter the initial size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array
    arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input initial array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array
    printf("Original array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Ask user for new size of array
    printf("Enter the new size of the array: ");
    scanf("%d", &newSize);

    // Reallocate memory
    arr = (int *)realloc(arr, newSize * sizeof(int));
    if (arr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // If the new size is larger, ask user to fill in extra elements
    if (newSize > size) {
        printf("Enter %d additional elements:\n", newSize - size);
        for (i = size; i < newSize; i++) {
            scanf("%d", &arr[i]);
        }
    }

    // Display the resized array
    printf("Resized array: ");
    for (i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr);

    return 0;
}