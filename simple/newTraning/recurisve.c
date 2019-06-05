#include<stdio.h>

int Fact(int x)
{
    int m, n;
    if (x == 0)
    {
        n = 1;
    }
    else
    {
        n = x*Fact((x- 1));    /// recursive function i am u;sing here //
    }
    return n;
}

int main(){
    int numb;
printf("Enter a Number");
scanf("%d",&numb);
 int  r = Fact(numb);
 printf("%d",r);
    return 0;
}


    
