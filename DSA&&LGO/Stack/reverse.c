#include<stdio.h>
#include<stdlib.h>
int Reverse();
int main()
{
  Reverse();
  return 0;
}
int Reverse()
{
  int x,i;
  printf("what is size of array");
   scanf("%d",&x);
   int Arr[x];

   for ( i = 0; i < x; i++) {
     scanf("%d",&Arr[i]);
   }
   int *g = Arr;
   i=x-1;
   //printf("%d\n",Arr[x]);
     while (i<=0)
        {

          printf("%d\t",*(Arr+i));
          i--;
        }



    return 0;
}
