#include <stdio.h>
typedef struct complex{
int i;
int r;
}num;
int main()
{
    num num1,num2,s;
    printf("Input the value of a and b in equation(a+bi) which is a complex number -\n");
    scanf("%d",&num1.r);
    scanf("%d",&num1.i);
    printf("Input another value of a and b in equation(a+bi) which is a complex number -\n");
    scanf("%d",&num2.r);
    scanf("%d",&num2.i);
    s.i=num1.i+num2.i;
    s.r=num1.r+num2.r;
    printf("Sum of complex number -  %d + %d i",s.r,s.i);
    return 0;
}
