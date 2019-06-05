#include<stdio.h>
#include<stdlib.h>



  int main(){
        int temp, i=0, j=0;
        int array[10] /*={9,4,8,9,97,4,12,5,6,47}*/; // declared  a array here
        for (i = 0; i < 10; i++)
        {
            scanf("%d",&array[i]);
  }
  
        
        while(1){    // this is infinite loop 
            j=0;   ///  
        for(i=0;i<10;i++)  {
              
        if(array[i] > array[i+1]){  // comparing arrya where  i > (i+1)  
             
              temp =array[i] ;    // if arrayis gereter than i+1 assign value to  temp 
             
              array[i] = array[i+1];  //  swaping value 
              
              array[i+1]= temp;    // 
             
                    j=1;

        }
      


        }

        if(j==0){   //  when j =0 become  o loop going to stop  ;
          break;
        }
        }


        for(j=0; j<=9;j++)      {
          printf("%d \t",array[j]);
        }
  }



