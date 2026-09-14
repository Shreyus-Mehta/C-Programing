#include <stdio.h>
int main()
{
int n,first,last,temp,p=1;
printf("Enter a number: ");
scanf("%d",&n);
temp=n;
last=n%10;
while(temp>=10)
{
temp=temp/10;
p=p*10;
}
first=temp;
n=n-(first*p)-last;
n=n+(last*p)+first;
printf("After swapping = %d\n",n);
return 0;
}
