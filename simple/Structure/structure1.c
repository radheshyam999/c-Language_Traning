#include<stdio.h>
struct student
{
   int age[20];
   char id[20];
   char d[20];
};
int main()
{
    struct student stu[20];
    stu[0].age[0] =20;
    stu[0].age[1] =20;
    stu[0].age[3] = stu[0].age[0]+stu[0].age[0];
    stu[0].age[20] ="html";
     printf("%d %s",stu[0].age[3], stu[0].age[20]);
    return 0;
}

