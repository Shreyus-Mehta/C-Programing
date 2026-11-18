#include <stdio.h>
int main()
{
    char str[100];
    int i,last=0;
    fgets(str,100,stdin);
    for(i=0;str[i]!='\0'&&str[i]!='\n';i++)
    {
        if(str[i]==' ')
            last=i+1;
    }
    for(i=0;i<last;i++)
    {
        if(i==0||(str[i-1]==' '&&str[i]!=' '))
            printf("%c.",str[i]);
    }
    for(i=last;str[i]!='\0'&&str[i]!='\n';i++)
        printf("%c",str[i]);
    return 0;
}
