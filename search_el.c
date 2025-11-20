#include<stdio.h>
int search(int arr[],int key,int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        return 1;
    }
    return 0;
}
void main()
{
    int arr[3]={7,19,45};
    int n= 3;
    int key;
    printf("What are you searching?");
    scanf("%d",&key);
    printf("%d",search(arr,key,n));
}
