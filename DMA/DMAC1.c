  #include<stdio.h>
  #include<stdlib.h>

   

 void StartDyanmicAlloacation()
{   
     int x[12];
     int *prt;
    // prt= (int*) malloc(sizeof(x));
     prt = (int*)realloc(prt,sizeof(int)*4);
   if (prt == NULL)
   {
     printf("Memory is not allocated");
   }
   else
   {
     printf("meomery is   allocated");
   }
   
   
//free(prt);


}

int main()
{

  StartDyanmicAlloacation();
}
