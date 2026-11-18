#include <stdio.h>
enum Status
{
    SUCCESS,FAILURE,TIMEOUT
};
int main()
{
    enum Status s;
    int choice;
    printf("Enter status (0=SUCCESS, 1=FAILURE, 2=TIMEOUT): ");
    scanf("%d",&choice);
    if(choice<0 || choice>2)
    {
        printf("Invalid choice");
        return 0;
    }
    s=choice;
    switch(s)
    {
        case SUCCESS:
            printf("Operation Successful");
            break;
        case FAILURE:
            printf("Operation Failed");
            break;
        case TIMEOUT:
            printf("Time Out");
            break;
    }
    return 0;
}
