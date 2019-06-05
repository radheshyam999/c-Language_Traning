#include<stdio.h>
#include<stdlib.h>
struct acessDATA
{
    int x;
    int y;
};

int main(){
    
   struct acessDATA *a;

      a = (struct acessData*)malloc(sizeof(struct acessDATA));
       if (a==NULL)  {
         printf("some error ");
       } 
       else
       {
         scanf("%d  %d",&a->x, &a->y);
         printf("%d and %d",a->x,a->y);

       }
          


    }