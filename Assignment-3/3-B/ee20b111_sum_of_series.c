//C program to calculate sum of harmonic series : 1 + (1/2) + (1/3) + ... + (1/n)//
#include<stdio.h>
int main()
{
    int n;float sum = 1,k; //Initialisation for 'for' loop, sum = 1 when n=1 as i starts from 2//
    printf("Please enter an integer: ");
    scanf("%d",&n);
    if( n<0 ) 
        printf("Please enter positive integers only.");
    else if( n==0 )
        printf("Sum of series = 0");  // zero terms are taken so sum is 0//
    else if( n>0 )  
    {
        printf("Sum of series = 1");
        for(int i=2;i<=n;i++)  
        {
            k = 1.0/i;             //k is float , so we write 1 as 1.0//
            sum += k;              //sum += k implies that sum = sum +k// 
            printf(" + (1/%d)",i);
        }
        printf(" = %f",sum);
    }
    return 0;
}
