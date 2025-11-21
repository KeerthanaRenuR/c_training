#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p=(int*)malloc(4*sizeof(int));
    p[0]=78;
    p[1]=65;
    p[2]=56;
    p[3]=83;
    printf("%d%d%d%d",p[0],p[1],p[2],p[3]);
    free(p);
}