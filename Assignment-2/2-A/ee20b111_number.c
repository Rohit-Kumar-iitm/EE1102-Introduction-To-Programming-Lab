//Finding product of the digits in a given number using for loop//
#include<stdio.h>
int main()
{
    int number,p,digit;  //digit is obtained through modulo operator(%)//
    printf("Please enter a number(integers only): ");
    scanf("%d",&number);
    for(p=1;number>0;number=number/10)
    {
     digit=number%10;
     p=p*digit;
     }
     printf("The product of digits of the given number is: %d",p);
    return 0;
}