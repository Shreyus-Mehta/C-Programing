#include <stdio.h>
int main()
{
    FILE *fp;
    char name[50],ch;
    scanf("%s",name);
    fp=fopen(name,"r");
    if(fp==NULL)
    {
        printf("File does not exist");
        return 1;
    }
    while((ch=fgetc(fp))!=EOF)
        putchar(ch);
    fclose(fp);
    return 0;
}
