#include <stdio.h>
int main()
{
    FILE *fp;
    char ch;
    int v=0,c=0;
    fp=fopen("info.txt","r");
    if(fp==NULL)
        return 1;
    while((ch=fgetc(fp))!=EOF)
    {
        if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        {
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                v++;
            else
                c++;
        }
    }
    fclose(fp);
    printf("Vowels=%d\nConsonants=%d",v,c);
    return 0;
}
