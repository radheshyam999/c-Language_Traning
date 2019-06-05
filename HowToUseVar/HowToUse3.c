#include<stdio.h>
int lsdm(int x) // created   function here  with one argument  //
{
    //int n=1;

    if (x == 0)
    {
        x = 1;
    }
    else
    {
        x = x * lsdm(x - 1);  // recursioing here   // 
    }

    return x;   // x is returning here 
} 
void main()
{     int numb,z;
    printf("Pleas Enter a number ");

     scanf("%d",&numb);

    z =  lsdm(numb);  //  passing  on value here and  catching return vlaue here  

     printf("%d",z);
}

