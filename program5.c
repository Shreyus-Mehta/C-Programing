#include <stdio.h>

int main()
{
float Side1, Side2, Side3;
printf("Enter the lengths of 3 sides of the triangle");
printf("Enter Side1:");
scanf("%f", & Side1);
printf("Enter side2: ");
scanf("%f", & Side2);
printf("Enter side3: ");
scanf("%f",& Side3);

if ((Side1 + Side2 > Side3) && (Side1 + Side3 > Side2) && (Side2 + Side3 > Side1))

{

printf("The triangle is valid\n");
} else {
printf("The triangle is not valid\n");

}
return 0;
}
