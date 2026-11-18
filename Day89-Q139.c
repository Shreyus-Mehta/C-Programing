#include <stdio.h>
enum Color
{
    RED=1,GREEN=2,BLUE=3
};
int main()
{
    enum Color c;
    c=RED;
    printf("RED = %d\n",c);
    c=GREEN;
    printf("GREEN = %d\n",c);
    c=BLUE;
    printf("BLUE = %d\n",c);
    return 0;
}
