#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct DMA
 {
     char *c;
     int i,sichar;

 };
 struct DMA node;

 int main() {
    printf("Enter size of Array");
       scanf("%d",&node.sichar);
    node.c =(char*) malloc(sizeof(char) * node.sichar);
     if (node.c==NULL)
     {
         printf("memory allocation  failed");
     }
     else
     {
         printf("memory allocated");
         for (node.i = 0; node.i < node.sichar; node.i++)
         {
             scanf("%c",&node.c[node.i]);
          }
          for (node.i = 0; node.i < node.sichar; node.i++)
          {
               printf("%c",node.c[node.i]);
          }
        
     }
     
     
    
    return 0;
}