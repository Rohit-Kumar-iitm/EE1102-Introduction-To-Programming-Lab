//COMPUTING THE MATURITY AMOUNT OF A DEPOSIT USING SIMPLE INTEREST CALCULATION//
#include<stdio.h>
int main()
{
    int p,t;
    float m,r;
    printf("Enter the required details:\n");
    printf("Principal amount(in Rs.): ");
    scanf("%d",&p);
    printf("Rate Of Interest(in %%): ");
    scanf("%f",&r);
    printf("Number Of Days: ");
    scanf("%d",&t);
    m=p*(r/100.0)*(t/365);
    printf("The Maturity Amount is Rs. %f\n",m);
    return 0;
}