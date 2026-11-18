#include <stdio.h>
int main()
{
    int a[100],n,k,i,sum=0,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    if(k<=0||k>n)
        return 0;
    for(i=0;i<k;i++)
        sum+=a[i];
    max=sum;
    for(i=k;i<n;i++)
    {
        sum=sum+a[i]-a[i-k];
        if(sum>max)
            max=sum;
    }
    printf("%d",max);
    return 0;
}
