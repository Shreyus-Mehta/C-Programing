#include <stdio.h>

int main()

{

int length, breadth, area, perimeter;

printf("Enter the length of the rectangle: ");
scanf("%d",&length);

printf("\n Enter the breadth of the rectangle: ");
scanf("%d",&breadth);

area = length * breadth;
perimeter = 2 * (length + breadth);

printf("\n The area of the rectangle is %d", area);
printf("\n The perimeter of the rectangle is %d\n", perimeter);

return 0;
}
