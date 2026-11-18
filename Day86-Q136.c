#include <stdio.h>
enum Operation
{
    ADD=1,SUBTRACT,MULTIPLY
};
int main()
{
    enum Operation choice;
    int a,b,ch;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    printf("1.Add 2.Subtract 3.Multiply\n");
    scanf("%d",&ch);
    choice=ch;
    switch(choice)
    {
        case ADD:
            printf("Result=%d",a+b);
            break;
        case SUBTRACT:
            printf("Result=%d",a-b);
            break;
        case MULTIPLY:
            printf("Result=%d",a*b);
            break;
        default:
            printf("Invalid choice");
    }
    return 0;
}
