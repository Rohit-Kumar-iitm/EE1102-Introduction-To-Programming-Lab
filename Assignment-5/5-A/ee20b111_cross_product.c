// C program to compute cross product of two vectors using arrays(5-A, Q-1)//
#include<stdio.h>
int main()
{
    float a[3],b[3];//a = 1st vector , b = 2nd vector given by user//
    int i;//i is used in for loop//
    printf("Please enter the x-,y-,z-components of first vector(a): ");
    for(i=0; i<3; i++)//for loop to take input of vector_a from user//
    {
        scanf("%f",&a[i]);//vector_a = a[0]i + a[1]j + a[2]k//
    }
    printf("Please enter the x-,y-,z-components of second vector(b): ");
    for(i=0; i<3; i++)//input of vector_b through for loop//
    {
        scanf("%f",&b[i]);//vector_b = b[0]i + b[1]j + b[2]k//
    }
    printf("The first vector(a) is, a` = %fi + %fj + %fk\n",a[0],a[1],a[2]);//This symbol(`) is used to denote bar on vector//
    printf("The second vector(b) is, b` = %fi + %fj + %fk\n",b[0],b[1],b[2]);
    //a[0] , a[1], a[2] are x-,y-,z-components of vector_a repectively, similarly for vector_b//
    printf("The cross product of above two vectors a`,b` is = a` x  b` = ");
    //If vector_a = a1i + a2j + a3k ,vector_b = b1i + b2j + b3k then axb = (a2*b3-b2*a3)i + (b1*a3-a1*b3)j + (a1*b2-a2*b1)k//
    printf("%fi + ",a[1]*b[2]-a[2]*b[1]);//x(i) component of a`xb`//
    printf("%fj + ",a[2]*b[0]-a[0]*b[2]);//y(j) component of a`xb`//                    
    printf("%fk",a[0]*b[1]-a[1]*b[0]);   //z(k) component of a`xb`//
    return 0;
}