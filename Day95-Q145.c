#include <stdio.h>
struct Student
{
    char name[30];
    int roll_no;
    float marks;
};
struct Student topStudent()
{
    struct Student s[3],top;
    int i;
    for(i=0;i<3;i++)
    {
        printf("Enter name, roll number and marks: ");
        scanf("%29s%d%f",s[i].name,&s[i].roll_no,&s[i].marks);
    }
    top=s[0];
    for(i=1;i<3;i++)
    {
        if(s[i].marks>top.marks)
        {
            top=s[i];
        }
    }
    return top;
}
int main()
{
    struct Student s;
    s=topStudent();
    printf("\nTop Student Details\n");
    printf("Name: %s\n",s.name);
    printf("Roll Number: %d\n",s.roll_no);
    printf("Marks: %.2f",s.marks);
    return 0;
}
