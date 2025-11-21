#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *p=(int*)calloc(3,sizeof(int));
    p[0]=15;
    p[1]=21;
    p[2]=39;
    //increase size to 5 integers
    p=(int*)realloc(p,5*sizeof(int));
    p[3]=65;
    p[4]=87;
    int i;
    for(i=0;i<=5;i++)
    {
        printf("%d",p[i]);
    }
}