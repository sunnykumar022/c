#include <stdio.h>

// Define a structure containing two integers
struct Numbers {
    int a;
    int b;
};

// Function to calculate the sum of the two integers in the structure
int calculateSum(struct Numbers nums) {
    return nums.a + nums.b;
}

int main() {
    struct Numbers nums;

    // Input the two integers
    printf("Enter first number: ");
    scanf("%d", &nums.a);
    printf("Enter second number: ");
    scanf("%d", &nums.b);

    // Call the function and display the result
    int sum = calculateSum(nums);
    printf("The sum of %d and %d is %d\n", nums.a, nums.b, sum);

    return 0;
}