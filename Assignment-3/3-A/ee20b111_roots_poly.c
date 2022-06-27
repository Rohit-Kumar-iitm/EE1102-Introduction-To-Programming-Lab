//Finding roots of Quadratic Equation f(x) = Ax^2 + Bx + c = 0//
#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,D,a,b,r1,r2;  //D = discriminant = B^2 - 4AC//
    printf("Please enter the coefficient of x^2: ");
    scanf("%f",&A);
    printf("Please enter the coefficient of x: ");
    scanf("%f",&B);
    printf("Please enter the constant term: ");
    scanf("%f",&C);
    D = (B*B) - 4*(A*C);
    printf("The given Quadratic Equation is f(x) = (%f)x^2 + (%f)x + (%f) = 0\n",A,B,C);
    if(D < 0)
    {
        D = -D;  //since sqrt() operates on positive number we take absolute of D and replace sqrt(-1) with i//
        a = (-B/(2*A)) ; b = (sqrt(D)/(2*A));   // a = -B/2A and b = sqrt(D)/4A//
        printf("The roots of quadratic equation(complex),are %f + %fi , %f - %fi\n",a,b,a,b);
    }else if(D == 0)
    {
        a = (-B/(2*A)) ; b = 0;
        printf("The roots of quadratic equation(repeated),are %f , %f\n",a,a);  
    }else if(D > 0)
    {
        a = (-B/(2*A)) ; b = (sqrt(D)/(2*A));
        r1 = a + b; r2 = a - b;    //r1,r2 are two different roots//
        printf("The roots of quadratic equation(real and distinct),are %f + %f , %f - %f = %f , %f\n",a,b,a,b,r1,r2);    
    } 
    return 0;
}