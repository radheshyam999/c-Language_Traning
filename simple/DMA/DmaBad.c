#include<stdio.h>
#include<stdlib.h>
struct node{
    int x;
    struct node *one;

};
int main()
{
     printf("hello Dma");
    struct node *two;
    two = malloc(sizeof(two->x)*8);
    printf(" malloc size %d", sizeof(two));
    two = realloc(two, sizeof((two->x)));
    printf(" two->x:%d \n",sizeof(two->x));
    printf(" reloc size %d", sizeof(two));
    return 0;
}