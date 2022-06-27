//Finding the number of one's(1) in binary equivalent of a given positive integer//
#include<stdio.h>
int main()
{
    int num,num_ones,i,size_of_int;
    printf("Please enter an integer: ");
    scanf("%d",&num);
    num = (num>0)? num:-num;  //Always taking an absolute value//
    num_ones = 0;
    size_of_int = sizeof(int)*8; // Calculating total number of bits , and 1byte = 8 bits//
    for(i=0;i<size_of_int;i++)
    {
     if((num&1)==1)
     num_ones++; //num_ones = num_ones + 1
     else
     num_ones = num_ones;
     num=num>>1;
    }
    printf("The Number of one's(1 bit) in binary equivalent is %d.\n",num_ones);
    printf("Also the sum of bits of binary equivalent(digits of binary number) is equal to %d.",num_ones);
    return 0;
}