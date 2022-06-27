//C program to find binomial coefficient NCK or C(N,K)//
#include<stdio.h>
int main()
{   //Using double variable for N! since N! will be a large number.//
    int N,K,i; double fact_N = 1,fact_NminusK = 1,fact_K = 1,N_C_K;
    printf("Please enter the value of N in binomial coefficient NCK: ");
    scanf("%d",&N);
    printf("Please enter the value of K in binomial coefficient NCK: ");
    scanf("%d",&K);
    for(i=1;i<=N;i++)      //For loop to calculate N!//
    {
     fact_N = (fact_N)*i;
    }
    for(i=1;i<=K;i++)
    {
     fact_K = (fact_K)*i;
    }
    for(i=1;i<=N-K;i++)
    {
     fact_NminusK = (fact_NminusK)*i;
    }
    N_C_K = (fact_N)/(fact_NminusK*fact_K);      //Since NCK = C(N,K) = (N!)/{(N-K)!*K!}// 
    printf("The binomial coefficient NCK = C(N,K) = %lf",N_C_K);
    return 0;
}