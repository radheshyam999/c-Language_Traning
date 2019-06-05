#include<stdio.h>
int main()
{
    int x =10;
    int *p;
    p =&x;
    printf("%d", x);
    printf("%d", p);
    printf("%u", &p);
    printf("%d", *&p);
    printf("%d",*p);
    return 0;
}