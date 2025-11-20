#include<stdio.h>
#include<stdlib.h>
int sub_arr(int arr [], int n)
{
    int sub = arr[0]- arr[n-1];
    return abs(sub);
}
void main()
{
    int arr[5]={1,6,37,17,18};
    int n=5;
    printf("%d",sub_arr(arr,n));
}
