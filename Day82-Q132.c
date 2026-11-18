#include <stdio.h>
enum Traffic
{
    RED,YELLOW,GREEN
};
int main()
{
    enum Traffic light;
    scanf("%d",&light);
    switch(light)
    {
        case RED:
            printf("Stop");
            break;
        case YELLOW:
            printf("Wait");
            break;
        case GREEN:
            printf("Go");
            break;
        default:
            printf("Invalid");
    }
    return 0;
}
