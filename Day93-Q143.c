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
    int i,max=0;
    for(i=0;i<5;i++)
    {
        printf("Enter name, roll number and marks: ");
        scanf("%29s%d%f",s[i].name,&s[i].roll_no,&s[i].marks);
    }
    for(i=1;i<5;i++)
    {
        if(s[i].marks>s[max].marks)
        {
            max=i;
        }
    }
    printf("Top Student: %s\n",s[max].name);
    printf("Roll Number: %d\n",s[max].roll_no);
    printf("Marks: %.2f",s[max].marks);
    return 0;
}
