#include<stdio.h>
void main()
{   int i =0;
    int x[] = {0,1, 12, 3, 4, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 28, 27, 27, 29, 30, 31, 32, 35, 36, 9, 90, 120};
     size_t size = sizeof x / sizeof *x;

     int Arr[size];
     for( i = 0; i < size; i++)
    {
         Arr[i] = i;
         if (Arr[i] == x[i])
         {
             Arr[i] = x[i];
             printf("%d", Arr[i]);

            }   /* code */
     }

     for (i = 0; i < size; i++)
     {
       
         if (Arr[i] < x[i])
         {
              x[i] = Arr[i];
              printf("%d", x[i]);

         } /* code */
     }

     printf("%d", x[i]);
}