#include <stdio.h>
void StartCoding()
{  int i=1;
      int howmuchnumberwanttoentr= 1;
      int getnum[howmuchnumberwanttoentr];
          printf("how much number do you want Enter ");
          scanf("%d", &howmuchnumberwanttoentr);
           printf("Pleas Enetr  number ");
           for(i=1;i <= 20; i++){
               scanf("%d",&getnum[i]);
               //printf("%d", getnum[i]);
           }

           for (i = 1; i <= howmuchnumberwanttoentr; i++)    /** i am geting some problem to resolve **/
           {
             printf("%d",getnum[i]);
             
           }
           
    
}
   
void main()
{
    StartCoding();
}
