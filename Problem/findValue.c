#include<stdio.h>
void calculate(int x); 
int main()
{ 
    int call;
printf("Enter how Many have you made  ");
  scanf("%d",&call);
  calculate(call);
}
void calculate(int  x)
{ int z;

    if (x >= 100) /// first condition
    {
        double value = 0;
        z = x - 100;
        value = 150;
        // printf("%d",z);
        if (z >= 100) // second condition
        {
            x = z - 100;
            value = value + 2 * 100;
            if (x >= 100) // third condition
            {
                z = x - 100;
                value = value + 2 * 100;

                if (z >= 100) //   fourth condition
                {
                    x = z - 100;
                    value = value + 2 * 100;
                    if (x >= 100) // fifth condition
                    {
                        z = x - 100;
                        value = value + 2 * 100;
                        if (z >= 100 || z <= 100 ) //  sixth condition
                        {
                            x = z - 100;
                            value = value  + .25 * 100;
                            printf("%f",value);
                            // if (x >= 100) // fourth condition
                            // {
                            //     z = x - 100;
                            //     value = value + 2 * 100;
                            // }
                            // else
                            // {
                            //     value = value + z * 2;
                            //     printf("%f\n", value);
                            // }
                        }
                        else // sixth
                        {
                            value = value + x * 2;
                            printf("%f\n", value);
                        }
                    }
                    else // fifth else
                    {
                        value = value + x * .5;
                        printf("%f\n", value);
                    }
                }
                else // forth else
                {
                    value = value + z * 1;
                    printf("%f\n", value);
                }
            }else   // third else 
           {
               value = value + x * 1.5;
               printf("%f\n", value);
           }
       }
       else   // second else 
       {
           
           value = value + z * 2;
           printf("%f\n", value);
       }
       
  }

  else   // first else 
  {
      printf("you have made %d call",x);
      
  }


}