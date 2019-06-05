#include<stdio.h>
 void  main()
    { int numb;
     printf("Enter A Number \n");
         scanf("%d",&numb);
         if (numb%2==0) {
             printf("it is Even Number \n");
             main();
         }
         else
         {
            printf("it is odd number \n ");
            main();
         }
         
         
    }
