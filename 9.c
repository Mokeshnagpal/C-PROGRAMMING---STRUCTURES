#include <stdio.h>
#include <stdlib.h>
struct tenisball
{
    char c[35];
    float w;
}mb;
int main()
{
    printf("Input color -\n");
    fflush(stdin);
    scanf("%[^\n]",mb.c);
    fflush(stdin);
    printf("Input weight in grams -\n");
    scanf("%f",&mb.w);
    printf("\nColour of my tennis ball - %s\n",mb.c);
    printf("Weight of my tennis ball - %0.2f g",mb.w);
    return 0;
}
