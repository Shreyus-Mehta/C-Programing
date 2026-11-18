#include <stdio.h>
int main()
{
    FILE *source,*destination;
    char s[50],d[50],ch;
    scanf("%s %s",s,d);
    source=fopen(s,"r");
    if(source==NULL)
        return 1;
    destination=fopen(d,"w");
    if(destination==NULL)
    {
        fclose(source);
        return 1;
    }
    while((ch=fgetc(source))!=EOF)
        fputc(ch,destination);
    fclose(source);
    fclose(destination);
    printf("File copied");
    return 0;
}
