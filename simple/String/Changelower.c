
#include<stdio.h>
#include<conio.h>
int main(){
    char Name[]="RADHESHYAM";
    int i =0;
     while (Name !='\0')
     {
         printf("%s", Name[i]);
         if (Name[i] > 'A' && Name[i] > 'Z')
         {
         Name[i] = Name[i]+32;
         printf("%s", Name[i]);
          }
          i++;
     }

      while (Name !="\0")
      {
          printf("%s",Name[i]);
          i++;
      }
       

}