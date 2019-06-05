#include <stdio.h>
int push();
int pop();
int peak();
int isEmpty();
int isFull();
int conditionOfstack(); 
int top = -1, maxsize = 5;
int  Arr[5] ;
int main()

{
    ///int Arr[5];
    //puts("what would be your size of array");
    //scanf("%d", &size);
    int Number;
    printf("what kind of task want to perform \n");
    printf("1 \t push  \n");
    printf("2 \t pop \n");
    printf("3 \t peak \n");
    printf("4 \t  condition \n");
    scanf("%d", &Number);
    switch (Number){
    case 1: 
    push();
   break;
case 2: 
pop();
break;

case 3 :
peak();
break;
case 4: 
conditionOfstack();
break;
 default : printf("htmlmcncsnlksnclk");

    }
    return 0;
}

int push()
{
    int value;
    //puts("What would be your array size");
    if (top == maxsize)
    {     printf("array is full ");
        for (int i = 0; i < maxsize; i++)
        {
           printf("%d",Arr[i]);
        }
        
    }
    else
    {

        puts("pleas Enter A value ");
        scanf("%d", &value);
        top++;
        Arr[top] = value;
        printf("succfully inseted value %d index is %d",Arr[top],top);
       
    }
    
  main(); 
}

int peak()
{
}
int pop()
{
    if (isEmpty())
    {
       printf("you don have any valu to pop");
    }
    else
    {
        for (int i = 0; i < top+1; i++)
        {
            printf("%d", Arr[i]);
        }
       top = top -1;
    }
    
    
}
int isEmpty()
{if (top==-1)
{
   return 1;
}
else
{
    
return 0;
    
}
}
int isFull()
{
}
int conditionOfstack()
{

}
