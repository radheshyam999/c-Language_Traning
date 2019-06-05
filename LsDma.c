#include<stdio.h>
#include<stdlib.h>
 struct Node
 {
  int i,j,**k,row,coulm;
  struct Node *dataGram;   
 };
int main() {
    struct Node **Acess,AcessDot;
    printf("Enter Array of Size row ");
    scanf("%d",&AcessDot.row);
    AcessDot.k = (int**)malloc(sizeof(int) * AcessDot.row);
    if(AcessDot.k ==NULL) {
         printf("Memory Allocation Failed");}
    else {
        printf("Memory Allocated \n");
        printf("What would we Size of coulmn");
        scanf("%d",&AcessDot.coulm);
           for (AcessDot.i = 0; AcessDot.i < AcessDot.row; AcessDot.i++)
           {
               AcessDot.k[AcessDot.i]= (int*)malloc(sizeof(int)*AcessDot.coulm);
           }
           for (AcessDot.i = 0; AcessDot.i < AcessDot.row; AcessDot.i++)
           {
               for (AcessDot.j = 0; AcessDot.j < AcessDot.coulm; AcessDot.j++){
                   scanf("%d",AcessDot.k[AcessDot.i][AcessDot.j]);
                   printf("[ %d] [%d] %d", AcessDot.i, AcessDot.j,AcessDot.k[AcessDot.i][AcessDot.j]);
               }
               printf("\n");
           }
           
       }
       
        
    

    return 0;
}