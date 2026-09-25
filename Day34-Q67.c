#include <stdio.h>
int main()
{
int a[101],n,i,pos,value;
printf("Enter number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter position: ");
scanf("%d",&pos);
printf("Enter element: ");
scanf("%d",&value);
for(i=n;i>pos;i--)
{
a[i]=a[i-1];
}
a[pos]=value;
n++;
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
return 0;
}
