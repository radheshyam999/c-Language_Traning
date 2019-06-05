#include<stdio.h>
  void  main()
{
    float widHight[2];
    printf("Pleas Enter Width of tringle \t");
    scanf("%f",&widHight[0]);
    printf("Pleas Enter height of tringle \t");
    scanf("%f", &widHight[1]);
    widHight[1] = widHight[0] * widHight[1]/ 2;
    printf("Area of Tringle: %f",widHight[1]);
   
}
