#include <stdio.h>
enum Days
{
    MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY
};
int main()
{
    enum Days d;
    char *names[]={"MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY"};
    for(d=MONDAY;d<=FRIDAY;d++)
    {
        printf("%s = %d\n",names[d],d);
    }
    return 0;
}
