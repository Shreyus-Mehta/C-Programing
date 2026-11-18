#include <stdio.h>
int main()
{
    int a[100],n,x,i,index=-1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]>=x)
        {
            index=i;
            break;
        }
    }
    printf("%d",index);
    return 0;
}
