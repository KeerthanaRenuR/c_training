#include<stdio.h>
#include<string.h>
void main()
{
    char name[10] = "keerthana";
    char new[100]="hello";
    printf("%c\n",name[10]);//access
    printf("length of string is %ld\n",strlen(name));
    strcat(new, name); //new = hello+keerthana
    printf("%s", new); 
    // search for a char in string!
    printf("%s", strstr(new, "H")); //0
}
