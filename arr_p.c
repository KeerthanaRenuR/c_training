#include<stdio.h>
void main()
{
    int arr[4]={57,32,12,52};
    int *p=arr;
    printf("%d",*(p+1));
}