#include<stdio.h>
#include<string.h>

int main()
{
    char x;
    printf("pleas Enter a chracater value to know that  ");
    scanf("%c",&x);
    //x =(char) strlwr(x);
    if (x == 'e' || x == 'a' || x == 'o' || x == 'u' || x == 'i' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    {
        printf("THESE ARE VOVELES   ");
    }

    else
    {

        printf("THESE ARE NOT VOVELES  ");
    }
        
}