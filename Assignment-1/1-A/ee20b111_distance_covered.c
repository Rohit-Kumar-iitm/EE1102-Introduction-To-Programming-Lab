//DISTANCE TRAVELLED USING SPEED AND TIME
#include<stdio.h>

int main()
{
    float x,v,t;
    printf("Please enter the values of Speed(Km/hrs) and Time of journey(hrs):");
    scanf("%f%f",&v,&t);
    x=v*t;
    printf("\nSpeed of vehicle(Km/hrs):%f",v);
    printf("\nTime of duration of journey(hrs):%f",t);
    printf("\nIn %f hrs,a vehicle travelling at %f Km/hrs covers %f Km.",t,v,x);
    return 0;
}