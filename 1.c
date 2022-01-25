#include <stdlib.h>
#include <stdio.h>
struct student
    {
        char n[30];
        double m;
        int r=0;
    }s;
int main()
{
    printf("Input name -\n");
    fflush(stdin);
    scanf("%[^\n]",s.n);
    fflush(stdin);
    printf("Input roll number -\n");
    scanf("%d",&s.r);
    printf("Input marks obtained -\n");
    scanf("%lf",&s.m);
    printf("Name - %s\n",s.n);
    printf("Roll number - %d\n",s.r);
    printf("Marks obtained - %0.2lf",s.m);
}
