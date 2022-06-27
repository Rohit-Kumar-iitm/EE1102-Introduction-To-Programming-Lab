//TIME CONVERSION
#include<stdio.h>
int main()
{
    int t;
    float t1,t2;
    printf("Please give the value of your time(in seconds) :");
    scanf("%d",&t);
    t1=t/60.0;
    printf("\nThe value of your time (in minutes) is = %f",t1);
    t2=t/3600.0;
    printf("\nThe value of your time (in hours) is = %f",t2);
    return 0;
}