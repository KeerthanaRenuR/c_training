#include<stdio.h>
#include<string.h>
void main()
{
    char des [100] = "kohli goes down the ground";
    char se [10] = "good";
    if ((strstr(des, se)) != NULL)
    printf("Found");
    else
    printf("Not found");
}