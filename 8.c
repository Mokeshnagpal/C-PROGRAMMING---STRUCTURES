#include <stdio.h>
#include <stdlib.h>
struct writer
{
    char n[35];
    char g[35];
}w[5];
int main()
{
    for(int i=0;i<5;i++)
    {
        printf("Input name of the author %d\n",i+1);
        fflush(stdin);
        scanf("%[^\n]",w[i].n);
        fflush(stdin);
        printf("Input genre of the author %d\n",i+1);
        fflush(stdin);
        scanf("%[^\n]",w[i].g);
        fflush(stdin);
    }
    printf("\nRecords -\nName\tGenre\n");
    for(int i=0;i<5;i++)
    {
        printf("%s\t%s\n",w[i].n,w[i].g);
    }
    return 0;
}
