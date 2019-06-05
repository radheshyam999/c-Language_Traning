#include<stdio.h>
int revereseNumber(int x)
{
    int  i;
    int arr[x];

    printf("%d",&arr);
    printf("Pleas Enter Number");
    for (i = 1; i <= x; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = x; i <= 0; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}

int main()
{  int numb;
    printf(" how many do want to Enter ");
    scanf("%d",&numb);

    revereseNumber(numb);

    return 0;
}