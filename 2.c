#include <stdio.h>
struct distance
{
    int i;
    int f;

}d1,d2;
int main()
{
    int x=0,a=0,b=0;
    printf("Input 1st distance in feet -\n");
    scanf("%d",&d1.i);
    printf("Input 1st distance in inch -\n");
    scanf("%d",&d1.f);
    printf("Input 2nd distance in feet-\n");
    scanf("%d",&d2.i);
    printf("Input 1st distance in inch -\n");
    scanf("%d",&d2.f);
    a=d1.i+d2.i;
    b=d1.f+d2.f;
    if(b>11)
    {
        x=b/12;
        a=a+x;
        x=b%12;
        b=x;
    }
    printf("\nSum of distances is %d foot and %d inches",a,b);
    return 0;
}
