#include <stdio.h>
void GaetData()
{
    char lsm[20];
    lsm[0] = 1;
    int i =0;
    for( i = 0; i < 5; i++)
    {
        scanf("%c", lsm[i]); /* code */
    }
    
    scanf("%c",&lsm);
    printf("%d",lsm[0]);
}

void main()
{ //int *p;
    printf("what is your name ");
     GaetData();
 }


  