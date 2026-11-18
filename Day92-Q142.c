#include <stdio.h>
struct Student
{
    char name[30];
    int roll_no;
    float marks;
};
int main()
{
    struct Student s[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter name, roll number and marks: ");
        scanf("%29s%d%f",s[i].name,&s[i].roll_no,&s[i].marks);
    }
    printf("\nStudent Details\n");
    for(i=0;i<5;i++)
    {
        printf("%s %d %.2f\n",s[i].name,s[i].roll_no,s[i].marks);
    }
    return 0;
}
