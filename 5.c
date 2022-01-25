#include <stdio.h>
struct book
{
    int id;
    char title[35];
    char author[35];
}book1,book2;
int main()
{
    struct book book1={101,"C Programming Hand Note","Bala guru swamy"};
    struct book book2={102,"Programming with fun","Sumita Arora"};
    printf("Id - %d\n",book1.id);
    printf("Book name - %s\n",book1.title);
    printf("Author name - %s\n\n",book1.author);
    printf("Id - %d\n",book2.id);
    printf("Book name - %s\n",book2.title);
    printf("Author name - %s\n",book2.author);
}
