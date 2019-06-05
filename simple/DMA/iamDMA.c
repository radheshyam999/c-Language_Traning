#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{ int x;
int *p;
    
   puts("what would be Array size");
   scanf("%d",&x);
   p = (int *)malloc(sizeof(int) * x);
   if(p == NULL ){
       printf("valu is null");
   }
   else{ 
   
   for (int i = 0; i < x; i++)
   {
       p[i] = i;
   }
   for (int i = 0; i < x; i++)
   {
       printf("[%d]\t %d \n", i, p[i]);
   }
   }
   free(p);
    return 0;
}
