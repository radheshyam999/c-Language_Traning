#include<stdio.h>
    void check_prime_number(int Numb)
     {
     if (Numb%2 != 0 || Numb==2) // i am chcking here  that number is prime or not
     {
	    // if(Numb)
	     //{

        printf("number is prime");
	   //}
     }
     else{
		printf("number is not prime ");
     }


    }


      void main()
     { printf("Enter A Number to Check That it is prime or not !");
          int  Number=5;

         // printf("%d",Number%5);
          scanf("%d",&Number);
          check_prime_number(Number); //  function is calling here  //

     }
