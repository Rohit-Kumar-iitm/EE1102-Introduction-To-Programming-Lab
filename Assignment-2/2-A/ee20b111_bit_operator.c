//To print the number(0 or 1) stored in the nth bit position of an integer//
#include<stdio.h> //This is for a 32 bit system//
int main()
    {
        int A,n,binarynum;
        printf("Note that this a 32 bit system.\nPlease enter an integer(A): ");
        scanf("%d",&A);
        printf("\nPlease enter the interested bit position of integer A(n): ");
        scanf("%d",&n);
        if(n>=0)
        {
        binarynum = (A>>n)&1;    
        printf("\nThe number occupied at %dth bit position of integer %d is: %d",n,A,binarynum);
        }
        else
        printf("\nThe value of n you entered is invalid/incorrect.");
        return 0;  
    }   
