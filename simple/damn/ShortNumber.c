#include<stdio.h>
void main()
{           int M=0;
            int i=0;
          
        int x[] ={1,12,3,4,4,5,6,7,8,9,10,11,12,13,14,15,16,17,28,27,27,29,30,31,32,35,36,9,90,120};
        size_t size = sizeof x/ sizeof *x;
        for (i = 0; i <= size; i++)
        {
            if(x[i]>M){  // here i am checking number which is bigger number 
            M = x[i]; 
             }
           }
           printf("%d",M);
           
}