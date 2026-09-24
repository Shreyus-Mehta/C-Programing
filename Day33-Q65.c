#include <stdio.h>
int main()
{
int a[100],n,key,low,high,mid,index=-1,i;
printf("Enter number of elements: ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter element to search: ");
scanf("%d",&key);
low=0;
high=n-1;
while(low<=high)
{
mid=(low+high)/2;
if(a[mid]==key)
{
index=mid;
break;
}
else if(a[mid]<key)
{
low=mid+1;
}
else
{
high=mid-1;
}
}
printf("%d\n",index);
return 0;
}
