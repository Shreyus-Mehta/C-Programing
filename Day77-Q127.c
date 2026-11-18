#include <stdio.h>
int main()
{
    FILE *fp,*out;
    char ch;
    fp=fopen("input.txt","r");
    out=fopen("output.txt","w");
    if(fp==NULL||out==NULL)
        return 1;
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch>='a'&&ch<='z')
            ch=ch-32;
        fputc(ch,out);
    }
    fclose(fp);
    fclose(out);
    printf("File converted");
    return 0;
}
