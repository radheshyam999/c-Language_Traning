#include<stdio.h>
#include<stdlib.h>

 int mergsort();
  int main()
  {
   mergsort();
  }
  int mergsort()
  {    int x,i,j,temp;
      printf("pleas what would be size of Array");
      scanf("%d",&x);
      int arr1[x];
      int arr2[x];
      int arr3[2*x];
     // int *r = arr;
      for ( i = 0; i < x; i++)
      {
          printf("Array1[%d]", i);
          scanf("%d",&arr1[i]);
          printf("Array2[%d]", i);
          scanf("%d", &arr2[i]);
          arr3[i] = arr1[i];
          arr3[i+1]  = arr2[i];
         // printf("%d \t", arr3[i+1]);
      }
      
for ( i = x; i < 2*x; i++)
{
       arr3[i] = arr2[i-x];
   // printf("%d \t",arr3[i]);
    //printf("%d \t", arr2[i]);

    /* code */
}

for ( i = 0; i < 2*x; i++)
{
    for ( j = i+1; j < 2*x; j++)
    {
       if (arr3[i] > arr3[j])
       {
          temp  = arr3[i];
          arr3[i] = arr3[j];
          arr3[j] = temp;
       }
       
    }
    
}
  for ( i = 0; i < 2*x ; i++)
  {
     printf("%d \t",arr3[i]);
  }
  

  }