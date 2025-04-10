#include <stdio.h>
#include <string.h>

union student
{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    union student s;

    printf("Enter Roll Number: ");
    scanf("%d", &s.rollno);
    printf("Roll Number: %d\n", s.rollno);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);  // Space before `%` ensures previous newline is ignored
    printf("Name: %s\n", s.name);

    printf("Enter Marks: ");
    scanf("%f", &s.marks);
    printf("Marks: %.2f\n", s.marks);

    return 0;
}
/*- scanf Function: It reads formatted input from the user.
- %[^\n] Format Specifier:- %[ ] is a scanset, which means it reads multiple characters based on the given pattern.
- ^\n inside the brackets means "accept all characters except newline (\n)".
- As a result, the input is read until the user presses Enter, storing everything in s.name.

- The Leading Space (" "): Before %[^\n], the space helps remove any leftover newline character from the input buffer (usually caused by a previous scanf for an

*/