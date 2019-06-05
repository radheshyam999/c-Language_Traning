#include<stdio.h>
int i=0;
int temp;
int arr[3];
int main()
{   
     printf("pleas Enter A Value");
for ( i = 0; i < 3; i++)
{
   scanf("%d",&arr[i]);
  
}

for (i = 0; i < 3; i++)
{ 
    if (arr[i] > temp)
    {      

          temp = arr[i];

         // arr[i]  = arr[i+1];
         //arr[i+1] = temp;

    }
     
}

printf("%d", temp);
}



