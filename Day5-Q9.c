#include <stdio.h>

int main()
 {
float principle, rate, time;
float si, ci;

printf("Enter principle amount: ");
scanf("%f", &principle);

printf("Enter rate: ");
scanf("%f", &rate);

printf("Enter time: ");
scanf("%f", &time);

si = (principle * rate * time) / 100;

printf("Simple Interest = %.2f\n", si);

ci = 1;

for (int i = 1; i <= time; i++) 
{

    ci = ci * (1+rate/100);
    // ci *= (1+rate/100);
}
ci = ci * principle -principle;

printf("Compound Interest = %.2f\n", ci);

return 0;
}
