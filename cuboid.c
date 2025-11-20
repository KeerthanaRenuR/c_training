//Write a C function which will accept three parameters l,b,h and returns volume of the cuboid!
#include<stdio.h>
float volume(int l, int b, int h)
{
    float vol=l*b*h;
    return vol;
}
void main()
{
    int l=2,b=9,h=7;
    printf("%f",volume(l,b,h));
}