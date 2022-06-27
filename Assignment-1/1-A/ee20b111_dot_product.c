// DOT PRODUCT OF TWO VECTORS//
#include<stdio.h>
int main()
{
    float x1,y1,z1,x2,y2,z2,k;
    printf("Please enter the value of x-component of first vector(a):");
    scanf("%f",&x1);
    printf("\nPlease enter the value of y-component of first vector(a):");
    scanf("%f",&y1);
    printf("\nPlease enter the value of z-component of first vector(a):");
    scanf("%f",&z1);
    printf("\nPlease enter the value of x-component of second vector(b):");
    scanf("%f",&x2);
    printf("\nPlease enter the value of y-component of second vector(b):");
    scanf("%f",&y2);
    printf("\nPlease enter the value of z-component of second vector(b):");
    scanf("%f",&z2);
    k=x1*x2+y1*y2+z1*z2;
    printf("The vector a = %fi + %fj +%fk\nThe vector b= %fi + %fj + %fk",x1,y1,z1,x2,y2,z2);
    printf("\nThe dot product of above two vectors a,b is = a.b = (%f)*(%f)+(%f)*(%f)+(%f)*(%f) = %f",x1,x2,y1,y2,z1,z2,k);
    return 0;    
}