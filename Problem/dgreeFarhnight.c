#include<stdio.h>
 void main()
{
    float tem;
    printf("Pleas Enter Temparture \t");
    scanf("%f", &tem);
    tem = 9/5 * tem;
   tem = tem +32;
    printf("%f",tem);
}