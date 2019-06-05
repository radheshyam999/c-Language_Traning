#include<stdio.h>
int addNumber(int y)
   {int temp,ls;
    temp =y%10;
     ls =(y - temp)/10; // 
     
     y = ls%10;
     temp = temp + y;
   y =  ls -y;
   ls = y / 10;
   y = temp+ls;
   printf("%d",y);
   

   }


 void main()
{   int x ;

    printf("Pleas Enter Number \t");
   scanf("%d",&x);
   printf("%d \n",x);
addNumber(x);
}