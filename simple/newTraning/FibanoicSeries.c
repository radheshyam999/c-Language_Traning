#include<stdio.h>
int FibanoicSeries(int numb)
{  int i=0,temp =0;
   for ( i = 0; i < numb; i++){
   //if (i >= temp)
  // {
      // if (temp+i<=numb)
      // {
           printf("%d", temp + i);
           temp = i;
           printf("tem:%d\n ", temp);
      // }
       

      
  // }
   
      
   }
   return 0;   
}

int  main()
{int x;
    printf("Pleas Enter Number ");
    scanf("%d",&x);
    FibanoicSeries(x);
  return 0;  
}