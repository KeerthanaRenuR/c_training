//structure for name of book,author,name
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Book
{
    char name [100];
    char author[100];
    int year;
};

void main()
{
    int n;
    printf("Enter number of Book:");
    scanf("%d",&n);
    struct Book b[3];
    for(int i=0;i<n;i++)
    {
        printf("Enter name of Book:");
        scanf("%s",b[i].name); 

        printf("Enter the author of the Book:");
        scanf("%s",b[i].author);

        printf("Enter year of Publication:");
        scanf("%d",&b[i].year);
    } 
} 