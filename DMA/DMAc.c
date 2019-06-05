#include<stdio.h>
#include<stdlib.h>
int main()
{     int x;
     printf("Let start Dynamic Memory Allocation");
        scanf("%d",&x);
      int *l = (int*) malloc(x *sizeof(int)); 

      if (l!=NULL)
      {
        printf("SucessFull !");
      }
      else
      {
          printf("failed !");
      }
      
       
} 