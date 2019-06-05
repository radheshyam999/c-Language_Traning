#include<stdio.h>
#include<stdlib.h>
 struct Node{
     int p;
     int l;
     int game;
     struct Node *Force;
 };
 int main() {
  struct Node Acess,*AcessP;
  AcessP = AcessP->;
  Acess.l=5;
  AcessP->game =6;
  Acess.p = AcessP->game+Acess.l;
  printf("%d",Acess.p);
  

    return 0;
}