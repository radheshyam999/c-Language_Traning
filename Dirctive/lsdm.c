#include<stdio.h>
#include<stdlib.h>
int main()
{ FILE *f;
  char ch;
    f =fopen("lsdm.c","r");
     while ((ch =fgetc(f) !=EOF))
       //ch =fgetc(f);
       printf("%c",ch);
       // if (ch==EOF)
       // {
       //   break;
       // }


     fclose(f);
   return 0;
}
