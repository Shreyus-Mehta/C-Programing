#include <stdio.h>
int main()
{
    FILE *fp;
    char name[50];
    int roll,i;
    float marks;
    fp=fopen("students.txt","w");
    if(fp==NULL)
        return 1;
    for(i=0;i<3;i++)
    {
        scanf("%s %d %f",name,&roll,&marks);
        fprintf(fp,"%s %d %.2f\n",name,roll,marks);
    }
    fclose(fp);
    fp=fopen("students.txt","r");
    while(fscanf(fp,"%s %d %f",name,&roll,&marks)==3)
        printf("%s %d %.2f\n",name,roll,marks);
    fclose(fp);
    return 0;
}
