//Program to check whether an integer is a prime number//
#include<stdio.h>
int main()
{
    int n,count=0,i=2;     //count is assigned either 0 or 1: true/false variable//
    printf("Please enter an integer(>=2): ");
    scanf("%d",&n);
    n = (n>0)? n:-n;    //Taking absolute value of integer//
    if( n>=2 )       //Because the least prime number is 2//
    {
        while( i<=n/2 )
        {
            if( n%i == 0 )   //condition for n is not a prime number//
            {
                count = 1; 
                break;
            }
            i = i + 1;      // or i++//
        }
        if( count == 0 )
        printf("%d is a prime number.\n",n);
        else
        printf("%d is not a prime number.\n",n); 
    }
    else
    {
     printf("Please enter integers greater than or equal to 2.");
    }
    return 0;
}