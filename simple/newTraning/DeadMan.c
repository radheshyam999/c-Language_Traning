#include<stdio.h>
#define max 5       // created here a  constant name of max that 
void push();
void pop();
void Display();
int  top =-1;     /* The  value  of top is -1 becuse when we  we push value we need  to increase every time that is main reson  */
int arr[max];

int main()
   {  int number;
      printf("choose option what you want to do? \n");
      printf("1 \t Push \n");
      printf("2 \t Pop \n");
      printf("3 \t Display \n");
      scanf("%d",&number);
     // while (1)
     // {
       switch(number){
        
             case 1:
                 push(); 
               break;
            case 2:
               pop();
               break;
           case 3:
                Display();
              break;
          
         
      }
      
   }
  // }
   void push()
    {  int value;  
       if (top == max-1)
         {
            printf("yow dont have Any value\n ");
            main();
         }
      else
        {
           top++;
           printf(" push Item");
           scanf("%d", &value);

           arr[top] = value;
           if (arr[top]==value)
           {
              printf("Entred \n");
           }
           
        }
      main(); 
   } 
   void pop()
    {
       if (top == -1)
        {
          printf("Empety \n");
        }
       else
          {
            top = top-1; 
          }
       main(); 
    }
    void Display()
     {  // top++;   
          //printf("%d",top);
        for (int i = 0; i <= top; i++)
          {
           printf("===%d ===\t",arr[i]);
         }
         printf("\n");
         main(); 
     }