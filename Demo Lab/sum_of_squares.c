//FINDING SUM OF SQUARES THROUGH C

#include<stdio.h>
int main()
{
    int a,b,c,d;
    a=10;
    b=-2;
    c=12;
    d=a*a+b*b+c*c;
    printf("A=%d\nB=%d\nC=%d\n",a,b,c);
    printf("A^2+B^2+C^2=(%d)^2+(%d)^2+(%d)^2=%d",a,b,c,d);
    return 0;
}