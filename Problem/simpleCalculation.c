/*Mr Amit joined a compuny  details of his sallary givien bellow
   1 HRA 30 % of his Sallary 
   2 DA  is 60 % of his sallary 
   3 TA is 20% of his basic sallary
    so calculate HRA DA TA and Gross Sallary 
*/

#include<stdio.h>
int calculate(double salrry);
int main()

{      double Sallary;

    printf("Pleas Enter your Sallarry");

        scanf("%d", &Sallary);
    calculate(Sallary); //  i am passing sallray here 
   


    return 0;

}

int calculate(double salrry)
{  double da,gross;

 gross = salrry * 30/100;   // HRA  

 da = salrry * 60 / 100; // DA

 salrry = salrry * 30 / 100; // TA

 printf("HRA \t \t %d \n", gross);

 printf("DA \t \t %d \n", salrry);

 printf("TA \t \t %d \n", da);

 gross = da + salrry + gross; // Gross sallary

 printf("GROSS Sallary \t %d \n", gross);

 printf(":..:.:.:.:.:.:");
 return 0;

}