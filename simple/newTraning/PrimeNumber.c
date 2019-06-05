#include<stdio.h>
int checkPrime(int y)
{
    if (y%2 !=0 || y==2)
    {
        printf("prime Number");
    }
    
}
void main()
{  int x;
   printf("Pleas Enter Number");
    scanf("%d",&x);

 checkPrime(x);
}