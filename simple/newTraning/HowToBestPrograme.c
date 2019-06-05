#include<stdio.h>
 int Facto(int x ){
   
    int m;
   if (x == 0) {
    m=1;
    //printf("%d", x);
    
   }
    else
    {
      printf("%d ", x);
      m =x * Facto((x-1));
      
    }
  // printf("%d", x);
   return m;
 }

 void main(){
     int numb;
      printf("Pleas Enter A number  to know Factorial");
        scanf("%d",&numb);
      numb=  Facto(numb);
      printf("main %d", numb);
 }