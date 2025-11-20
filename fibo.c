#include<stdio.h>
void fibo(int n)
{
    int a=0;
    int b=1;
    int sum;
    for(int i=0;i<n;i++)
    {
        printf("%d",a);
        int sum=a+b;
        a=b;
        b=sum;
    }
}
int main()
{
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    fibo(n);
}