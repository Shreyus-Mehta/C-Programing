#include <stdio.h>
int main()
{
    char s[100];
    int i,j,k,len,max=0,flag;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        len=0;
        for(j=i;s[j]!='\0';j++)
        {
            flag=0;
            for(k=i;k<j;k++)
            {
                if(s[k]==s[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
            len++;
        }
        if(len>max)
            max=len;
    }
    printf("%d",max);
    return 0;
}
