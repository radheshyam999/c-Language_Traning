#include<stdio.h>
#include<stdlib.h>
   void start_learning_dma(int x)
   {  
     int numb,  *point;
 
      point = (int*)malloc(x*sizeof(int));

        if(point == NULL)
	{
	
	  printf("memory did not allocate");
	}
	else
	{
 
             printf("Enter Number for Checking  ");
	          scanf("%d",&point);
	}
  }
 

    void  main()
   {
      
    start_learning_dma(); //  function  is start here 
    
    
    
    
     

    }
 

