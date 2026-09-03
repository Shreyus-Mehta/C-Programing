#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter the marks (0-100)");
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        grade = 'A';
    }
    else if (marks >= 80 && marks < 90)
    {
        grade = 'B';
    }
    else
    {
        printf("Invalid marks entered!\n");
        return 1;
    }

    printf("The grade is: %c\n", grade);

    return 0;
}
