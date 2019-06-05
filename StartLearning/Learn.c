  #include<stdio.h>
int  Start(int x)
{

  if (x == 1)
  {
  int y=  Start(x-2)*2;
  printf("%d", y);
  }
  else
  {

    printf("%d", x);
  }
}

int main(int y)
{

  printf("ths is my main method \n how to writ plea tell me ireall want to learn ........");




  Start(y);

   }



  
