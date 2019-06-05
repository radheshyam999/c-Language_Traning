#include<stdio.h>
int charItreater(int ls[])
{
    int i;
    for (i = 0; i <= 5; i++)
    {
        ls[i] =ls[i]*ls[i];
        printf(" \t %d ", ls[i]);
    }

    return 0;
}

int main()
{
    int x[] = {4, 5, 3, 6, 6};
    charItreater(x);
 }
 
