#include <stdio.h>

int main()

{

float celsius, fahrenheit;

printf("Enter temprature in celsius: ");
scanf("%f",&celsius);

fahrenheit = (celsius * 9 / 5) + 32;

printf("The temprature in fahrenheit is %f\n", fahrenheit);

return 0;
}
