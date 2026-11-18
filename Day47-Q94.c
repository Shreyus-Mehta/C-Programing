#include <stdio.h>
int main()
{
    char str[200];
    int i=0,len=0,max=0,start=0,best=0;
    fgets(str,200,stdin);
    while(1)
    {
        if(str[i]==' '||str[i]=='\n'||str[i]=='\0')
        {
            if(len>max)
            {
                max=len;
                best=start;
            }
            len=0;
            start=i+1;
        }
        else
            len++;
        if(str[i]=='\0'||str[i]=='\n')
            break;
        i++;
    }
    for(i=best;i<best+max;i++)
        printf("%c",str[i]);
    return 0;
}
