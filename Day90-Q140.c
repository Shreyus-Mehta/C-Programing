#include <stdio.h>
enum Gender
{
    MALE,FEMALE,OTHER
};
struct Person
{
    char name[30];
    enum Gender gender;
};
int main()
{
    struct Person p;
    int ch;
    printf("Enter name: ");
    scanf("%29s",p.name);
    printf("Enter gender (0=Male, 1=Female, 2=Other): ");
    scanf("%d",&ch);
    if(ch<0 || ch>2)
    {
        printf("Invalid choice");
        return 0;
    }
    p.gender=ch;
    printf("Name: %s\n",p.name);
    switch(p.gender)
    {
        case MALE:
            printf("Gender: Male");
            break;
        case FEMALE:
            printf("Gender: Female");
            break;
        case OTHER:
            printf("Gender: Other");
            break;
    }
    return 0;
}
