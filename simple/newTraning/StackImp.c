#include<stdio.h>
#include<stdlib.h>
#include<process.h>
int push();
int pop();
int display();
//int isFull();
//int isEmpty();
int top =-1, maxsize =5,item; 
   int stack[5];
int main()
{   int x;
    printf("1 \t push \n");
    printf("2 \t pop \n");
    printf("3 \t Display \n");
    printf("4 \t EXIT");
     scanf("%d",&x);
    switch (x)
    {
    case 1:
       push();
        break;
        case 2:
        pop();
       break;
       case 3:
       display();
       break;
       case 4:
         exit(0);
       break;
    default:
    printf("you have Entered wrong value \n");
    main();
        break;
    }
}
int push()
{   printf(" push Item \n");
     scanf("%d",&item);
    if (top==maxsize-1)
    {
        printf(" overflowing \n");
    }
    else
    {
         top++;
        // printf("%d \n",top);
         stack[top] = item;
         if (stack[top] ==item)
         {
           printf("Entred \n");
         }
            
    }
    
  main();  
}


int pop()
   {
      if (top== -1)
      {
         printf("Empety \n");
      }
      else
      {   
          top = top -1;

      }

      main();
   
    }


    int display()
    {
        if(top == -1)
        {
             printf(" Empaty \n");
            
        }
        else
        {   top++;
            for (int i  = 0; i < top ; i++)
              {
                printf("======%d =====\t", stack[i]);
              }
            printf("\n");
        }

        main();
    
    }