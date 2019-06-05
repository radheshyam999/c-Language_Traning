#include<stdio.h>
    
      void calculate(int fact)
      {   
	  
	   for(fact = fact;fact >= 1; fact--){
	    
	   printf("%d",fact);
	  
	  
	  
	  }
  } 

    
    
    
    
    
    int main()
    { 
       int Factoriol;
       printf("Enter a number  for geting");
      
       scanf("%d",&Factoriol);
      
       calculate(Factoriol);
      return 0;
    }
     

