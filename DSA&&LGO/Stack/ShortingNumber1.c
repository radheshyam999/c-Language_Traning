#include<stdio.h>
#include<stdlib.h>
//#define numb 5;
int i = 0;
    void SortinNumber(int Sort)
{
   int j=0, Temp =0;
    int Number[10];
   // printf("How many Number do want  Enter ");
    // scanf("%d",&numb);
    for (i = 0; i < 10; i++)
    {

        scanf("%d", &Number[i]);
    }

    while (1)
    {
        j = 0;
        for (i = 0; i < 10; i++)
        {
            if (Number[i] > Number[i + 1])
            {
                Sort = Number[i];
                Number[i] = Number[i + 1];
                Number[i + 1] = Sort;
                j = 1;
            }
            
        }
       // printf("%d", Number[i]);
        if (j == 0)
        {
            break;
            /* code */
        }
    }
    for ( i = 0; i < 10; i++)
    {
       printf("%d \t",Number[i]);
    }
    
}

isEmpty()
{
   for ( i = 0; i < 10; i++)
   {
       
   }
   
}
void DeleteNumber(int Delete)
{
    printf("I am Delete");
}
void AddNumber(int Add)
{
    printf("I am Add");
}

void main()
{int x;
    printf("1\tshorting numer:::::::::>>>>>> \n");

    printf("2 \t Delete Number :::::::::>>>>>>\n");

    printf("3 \t Add Numer:::::::::>>>>>> \n");

    printf("what you want to do");

    scanf("%d",&x);
     switch (x)
     {
     case 1:
        SortinNumber(x);
         break;
     case 2:
        DeleteNumber(x);
         break;
    case 3:
        AddNumber(x);
      break;
     default:
         break;
     }


}

