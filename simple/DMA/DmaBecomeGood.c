#include<stdio.h>
#include<stdlib.h>
  struct node
  {
     
    int *p;
  };
  
 int main() {
     int arr[10];
     struct node *one;
     
     //one->arr[0]=5;
     printf("size of : %d \n",sizeof(one));
     one =(struct node*) malloc(sizeof(arr)*10);
     one != NULL ? printf("memory allocated: %d",sizeof(arr)) : printf("memory not allocted");
     return 0;
}