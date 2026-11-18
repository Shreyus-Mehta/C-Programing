#include <stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    int age;
    fp=fopen("info.txt","w");
    if(fp==NULL)
    {
        printf("File error");
        return 1;
    }
    scanf("%s %d",name,&age);
    fprintf(fp,"Name: %s\nAge: %d",name,age);
    fclose(fp);
    printf("Data saved successfully");
    return 0;
}
