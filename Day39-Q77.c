#include <stdio.h>
int main()
{
    int a[10][10],r,c,i,j,k,distinct=1;
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(k=i+1;k<r;k++)
        {
            if(a[i][i]==a[k][k])
            {
                distinct=0;
            }
        }
    }
    if(distinct==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}

