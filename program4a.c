#include <stdio.h>
int main()
{

int number, digit1, digit2, digit3, sum;
printf("Enter a 3 digit number: ");
scanf("%d", &number);
if(number <100|| number >999) {
printf("THe number is invalid");
return 1;
}

digit1 = number/100;
digit2 = (number/10)%10;
digit3 = number%10;
sum = digit1 + digit2 + digit3;
printf("The sum of the digits of %d is: %d\n", number, sum);
return 0;
}
