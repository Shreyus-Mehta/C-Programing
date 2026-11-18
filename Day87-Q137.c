#include <stdio.h>
enum Role
{
    ADMIN,USER,GUEST
};
int main()
{
    enum Role r;
    int ch;
    printf("Enter role (0=ADMIN, 1=USER, 2=GUEST): ");
    scanf("%d",&ch);
    if(ch<0 || ch>2)
    {
        printf("Invalid role");
        return 0;
    }
    r=ch;
    switch(r)
    {
        case ADMIN:
            printf("Welcome Admin");
            break;
        case USER:
            printf("Welcome User");
            break;
        case GUEST:
            printf("Welcome Guest");
            break;
    }
    return 0;
}
