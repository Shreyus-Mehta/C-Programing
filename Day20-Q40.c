#include <stdio.h>
int main()
{
long long n,result=0,place=1,digit;
printf("Enter a binary number: ");
scanf("%lld",&n);
while(n!=0)
{
digit=n%10;
if(digit==0)
{
result=result+place;
}
n=n/10;
place=place*10;
}
printf("1's Complement = %lld\n",result);
return 0;
}
