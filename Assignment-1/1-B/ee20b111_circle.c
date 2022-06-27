//COMPUTING AREA AND CIRCUMFERENCE OF A CIRCLE//
#include<stdio.h>
int main()
{
    double r,a,s,pi=3.14;
    printf("Please enter the value of the Radius of circle(r)(in cm) : ");
    scanf("%g",&r);
    printf("\nGiven radius of circle(r)(in cm) = %g",r);
    a=(pi)*(r*r);
    printf("\nArea of circle(a)(in sqcm.) = pi*(%g*%g) = %g",r,r,a);
    s=(2)*(pi)*r;
    printf("\nCircumference of circle(s)(in cm) = 2*pi*(%g) = %g",r,s);
    return 0;
    
}