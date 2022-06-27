//C Program to find cube root of a number using Newton-Raphson Method(4-B ,Q-1)//
#include<stdio.h>
int main()
{
    float N;  // Here , f(x) = x^3 - N , solving for f(x) = 0 //
    double x_n,x_np1;  //x_n,x_np1 are nth ,(n+1)th value of iterated x ,they are large(x_n^3) so double is chosen//
    float tolerance = 0.00001; //Required approximation//
    float error = 100; //Can start from any error//
    printf("Please enter a number: ");
    scanf("%f",&N);
    x_n = N;   //Initialisation(can even take 2*N)//
    while( error > tolerance ) //Loop for Checking till |f(x_np1)| < error //
    {
        x_np1 = (1.0/3.0)*(2*x_n + N/(x_n*x_n)); // Newton-Raphson method: x_np1 = x_n - (f(x_n)/f'(x_n)) //
                                                   //Put f(x_n) = (x_n)^3 - N , f'(x_n) = 3*(x_n)^2 and simplify//
        error = (x_np1)*(x_np1)*(x_np1) - N;       // f(x) = x^3 - N , taking the error by definition//
        error = (error>0)? error:-error;  //Always taking the error to be positive//
        x_n = x_np1;  //Updating the value of x_n//
    }
    printf("The cube root of %f is %lf\n",N,x_np1); //The answer is now stored in x_np1//
    return 0;
}
