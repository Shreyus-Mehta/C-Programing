#include <stdio.h>
int main()
{
    FILE *fp;
    char str[200];
    fp=fopen("info.txt","a");
    if(fp==NULL)
        return 1;
    getchar();
    fgets(str,200,stdin);
    fprintf(fp,"%s",str);
    fclose(fp);
    printf("Text appended");
    return 0;
}
