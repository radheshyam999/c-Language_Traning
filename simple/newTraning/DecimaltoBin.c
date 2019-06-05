#include<stdio.h>
int main()
    {   int lst =10;
        int x,y=6,bin[lst],i = 0;
       printf("Enter number to know binary number of ");
       scanf("%d",&x);
       while (i>=0)
       {  if (y== 0 || y== 1)
       {   if (y==1)
           {
             bin[i] = 1;
           }
           else
           {
               bin[i]=0;  
           }
           
       
           break;
       }
       
       
       else
       {
            bin[i] = x % 2;
            y = (x - bin[i]) / 2;
            x=y;
       }

       i++;
       }
       
       for ( i = 0; i < lst; i++)
          {      //  i want string here reverese string 
                 printf("%d ",bin[i]);    
          }
       
          
    }
