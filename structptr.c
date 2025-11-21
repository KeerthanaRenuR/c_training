#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    char name[100];
    int age;
    float marks;
};
void main()
{
    struct student s1;
    struct student *p=&s1;
    strcpy(p -> name,"Akshaya");
    p -> age=17;
    p -> marks=89.9;
    printf("%d\n",p ->age);
    printf("%s\n",p ->name);
    printf("%f\n",p ->marks);
}