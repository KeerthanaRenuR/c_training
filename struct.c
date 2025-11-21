#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
    char name[100];
    int age;
    float marks;
};
void main()
{
struct student s1;
s1.age=37;
s1.marks=89.6;
strcpy(s1.name,"padikkal");

struct student s2;
s2.age=97;
s2.marks=90.6;
strcpy(s2.name,"Rajath");

struct student s3 = {"Virat",18,99};

printf("%s",s3.name);
printf("%d",s3.age);
}