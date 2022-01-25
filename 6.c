#include <stdlib.h>
#include <stdio.h>
struct student
{
    int m[5];
    char name[35];
}s1;
int main()
{
    double avg=0.0;
    int s=0;
    printf("Input name -\n");
    fflush(stdin);
    scanf("%[^\n]",s1.name);
    fflush(stdin);
    printf("Input marks in 5 subjects continuously -\n");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&s1.m[i]);
        s+=s1.m[i];
    }
    avg=(double)s/5;
    printf("Name - %s\n",s1.name);
    printf("Average - %0.2lf\n",avg);
    if(avg>90)
        printf("Grade A");
    else if(avg>80)
        printf("Grade B");
        else if(avg>70)
        printf("Grade C");
        else if(avg>60)
        printf("Grade D");
        else if(avg>50)
        printf("Grade E");
        else
        printf("Fail !!!");
        return 0;
}


