#include<stdio.h>
#include<stdlib.h>
void main()
{
    float *p=(float*)calloc(4,sizeof(float));
    p[0]=45.76;
    p[1]=23.7;
    p[2]=18.17;
    p[3]=9.75;
    printf("%f%f%f%f",p[0],p[1],p[2],p[3]);
    free(p);
}