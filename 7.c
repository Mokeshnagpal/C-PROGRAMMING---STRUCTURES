#include <stdlib.h>
#include <stdio.h>
struct student
{
    double a;
    int t;
    int mc;
    int mm;
    int me;
    int r;
}s[50];
int main()
{
    int m=0,n=0,c=0,p=0,f=0,r1=0,r2=0;
    for(int i=0;i<50;i++)
    {
        printf("Input roll number for student %d -\n",i+1);
        scanf("%d",s[i].r);
        printf("Input marks in computer for student %d -\n",i+1);
        scanf("%d",s[i].mc);
        printf("Input marks in maths for student %d -\n",i+1);
        scanf("%d",s[i].mm);
        printf("Input marks in english for student %d -\n",i+1);
        scanf("%d",s[i].me);
        s[i].t=s[i].mm+s[i].mc+s[i].me;
        s[i].a=(double)s[i].t/3;
        if(s[i].a>=75)
            c++;
        if(s[i].a>=40)
            p++;
        else
            f++;
        if(s[i].a>m)
        {
         m=s[i].a;
         r1=s[i].r;
        }
    }
    for(int i=0;i<50;i++)
    {
        if(s[i].a<m&&s[i].a>n)
            {
                n=s[i].a;
                r2=s[i].r;
            }
    }
    for(int i=0;i<50;i++)
    {
        printf("Roll number - %d\n",s[i].r);
        printf("Average - %d\n",s[i].a);
    }
    printf("\n\nHighest marks - %d is of student - %d\n",m,r2);
    printf("Highest marks - %d is of student - %d\n",n,r1);
    printf("Number of students with distinction - %d\n",c);
    printf("Number of students passed - %d\n",p);
    printf("Number of students failed - %d\n",f);
    return 0;
}
