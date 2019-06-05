#include <stdio.h>
int AddNumber(int y)
{
    int i = 0, trmp = 0;

    int array[y];
    for (i = 0; i < y; i++)
    {
        scanf("%d", &array[i]);
        trmp += array[i];
        
    }
    return trmp;
}
int main()
{
    int x=0;

    printf("how many Number Do you Want  Enter");
    scanf("%d", &x);
   x= AddNumber(x);
   printf(" This is Result %d",x);
}
