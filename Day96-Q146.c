#include <stdio.h>
struct Date
{
    int day,month,year;
};
struct Employee
{
    int id;
    char name[30];
    float salary;
    struct Date joining;
};
int main()
{
    struct Employee e;
    printf("Enter employee ID: ");
    scanf("%d",&e.id);
    printf("Enter employee name: ");
    scanf("%29s",e.name);
    printf("Enter salary: ");
    scanf("%f",&e.salary);
    printf("Enter joining date (dd mm yyyy): ");
    scanf("%d%d%d",&e.joining.day,&e.joining.month,&e.joining.year);
    printf("\nEmployee Details\n");
    printf("ID: %d\n",e.id);
    printf("Name: %s\n",e.name);
    printf("Salary: %.2f\n",e.salary);
    printf("Joining Date: %02d-%02d-%d",e.joining.day,e.joining.month,e.joining.year);
    return 0;
}
