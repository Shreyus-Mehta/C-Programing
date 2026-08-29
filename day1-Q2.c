#include <stdio.h>

int main()

{

int num1, num2, sum, diff, prod, divd;

printf("Enter the first number: ");
scanf("%d",&num1);

printf("\n Enter the second number: ");
scanf("%d",&num2);

sum = num1 + num2;
printf("\n The sum of %d and %d is %d", num1, num2, sum);

diff = num1 - num2;
printf("\n The difference of %d and %d is %d",num1, num2, diff);

prod = num1 * num2;
printf("\n The product of %d and %d is %d", num1, num2, prod);

if (num2 == 0)
{

printf("\n Since number 2 is 0 the output is undefined");
}

else
{

divd = num1/num2;
printf("\n The Quotient of %d and %d is %d", num1, num2, divd);
}
return 0;
} 
