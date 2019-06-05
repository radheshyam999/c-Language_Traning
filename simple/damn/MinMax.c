#include<stdio.h>

void Min()
{

    int i, Value, Min,s=0;

    printf("how much numer do you want to Enter for searching Min");

    scanf("%d", &Value);

    for (i = 0; i <= Value; i++)
    {

        scanf("%d", &Min);

        if (Min > i)
        {

            s = Min;
            //printf("")
        }

    } //  for loop is ending here

    printf("%d", s);
}

int main()
{
    
    int i = 1, Value, Max;
    int s=8;
    printf("How much number do you want to Give for max value");

        scanf("%d",&Value);
        printf("Enter Number");
        scanf("%d", &Max);
        for (i = 0; i <= Value; i++)
        {

            if (s > Max)
            {

                s = Max;
            }
       
	
	}
    printf("%d", s);

    Min();
   
   }
