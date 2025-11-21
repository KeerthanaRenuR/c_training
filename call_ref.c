//write a function which will multiply three numbers and call it by reference!
#include<stdio.h>
void product(int *a,int *b,int *c)
{
    int prod=(*a)*(*b)*(*c);
    printf("%d\n",prod);
}
void main()
{
    int a=6;
    int b=2;
    int c=5;
    product(&a,&b,&c);
}