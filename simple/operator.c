 #include<stdio.h>
 #include<math.h>


int  CheckOpertaor(double meal_cost, double tip_percent, double tax_percent)

{
    int Total_cost;
        double tip,tax;
       
        tip = meal_cost *(tip_percent/100);
        tax = meal_cost * (tax_percent / 100);
        Total_cost =(int) round((tip + tax +meal_cost));

        printf(" tip = %lf\n", tip);
        printf(" tax  = %lf\n", tax);
        // printf("%lf \n", tax_percent);

        printf("%d", Total_cost);
        return Total_cost;
}
int main()
{
    double meal_cost;
    double tip_percent;
    double tax_percent;
    scanf("%lf", &meal_cost);
    scanf("%lf", &tax_percent);
    scanf("%lf", &tip_percent);
   
    CheckOpertaor(meal_cost, tip_percent, tax_percent);
    
}