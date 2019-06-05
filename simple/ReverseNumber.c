#include<stdio.h>
int  ReverseNumber(int Number, int number2){
  int temp,dum ,i;
  int ansr[number2];
  int hjk[number2];
for ( i = 0; i < number2; i++)
{
    if (Number > 10)
    {  hjk[i] = Number;
        ansr[i] = hjk[i]%10;
      hjk[i] =  (hjk[i] - ansr[i])/10;
    }
    printf("%d",ansr[i]);
    // temp = Number % 10;
    // dum = (Number - temp) % 10; 
    /* code */
}

  
}
int main()
{  int x,y;
    printf("our what would length of Your Number");
    scanf("%d", &y);
    printf("Pleas Enter A number");
    scanf("%d",&x);
    ReverseNumber(x, y);
}