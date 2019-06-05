#include <stdio.h>
struct student
{
    int age;
    char Name;
    double gdp;
};
void main()
{
    struct student stu;
    stu.age = 22;
    stu.Name = "radheshyam";
    stu.gdp = 5.8;
    printf("%d", stu.age);
    printf("%s", stu.Name);
}
