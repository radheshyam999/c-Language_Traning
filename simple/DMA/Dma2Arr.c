#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    int **p;
    int i, Row,Colme,j;
    printf("enter Size of array");
    scanf("%d",&Row);
    p = (int**) malloc(sizeof(int)*Row);
     if(p==NULL){
         printf("Memory did not allocate");
     }else{
         printf("pleas Enter Size colmn");
         scanf("%d",&Colme);

         for(i=0;i<Row;i++){
             p[i] = (int *)malloc(sizeof(int) * AcessDot.Colme);
         }
         if (p[Row]==NULL)
         {
             return 1;
         }
         
     }
     for ( i = 0; i < Row; i++)
     {
        for (j = 0; j < Colme; j++)
        {  p[i][j] =i;
            printf("%d",p[i][j]);
        }
       printf("\n") ;
     }
     

    return 0;
}
