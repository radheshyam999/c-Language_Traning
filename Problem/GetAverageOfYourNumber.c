#include<stdio.h>
float *calculateAverage(float x[])
{
 
    
    int maxNumber = 300;
    x[2] = x[0] + x[1] + x[2];
    x[2] = x[2] * 100/300;
    printf("%f",x[2]);
    float *y = &x[2];
    return y;
}
int main()

{
    float *z;
    float subjecNumer[3];

    printf("How Many Number have you got in Physice ");
    scanf("%f", &subjecNumer[0]);
    
    
    printf("How Many Number have you got in Chemistry ");
    scanf("%f", &subjecNumer[1]);
    printf("How Many Number have you got in Chemistry ");
    scanf("%f", &subjecNumer[2]);

    if (subjecNumer[0] <= 100 && subjecNumer[0] <= 100 && subjecNumer[0] <= 100 /*&& subjecNumer[0] > 0 && subjecNumer[0] > 0 && subjecNumer[0] > 0*/)
    {
        z = calculateAverage(subjecNumer);
        printf("%f", z);
    }
    else
    { 
        printf("you can not get more than 100 number \n pleas  your Enter  Number less  than 100 ");
        main();
    }
    
    //    subjecNumer[2] = subjecNumer[0] + subjecNumer[1] + subjecNumer[2];
    //    subjecNumer[2] = subjecNumer[2] * 100/300;
    //      printf("%f %", subjecNumer[2]);
   
    return 0;
 }
 
 