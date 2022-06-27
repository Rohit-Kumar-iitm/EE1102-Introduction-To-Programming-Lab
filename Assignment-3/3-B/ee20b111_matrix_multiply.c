//c program to multiply two matrices of order 3x4 and 4x3//
#include<stdio.h>
int main()
{
    int m_A = 3,n_A = 4,m_B = 4,n_B = 3; // m_A,n_A are number of rows and columns of matrix A//
    int A[12], B[12],C[9]; //A[12] : 1D array of elements of matrix A ; C = A x B order is 3 x 3//
    printf("Please enter the elements(separated with ',' after each element): ");

    printf("Enter the elements of matrix A(%dx%d): ",m_A,n_A);   
    for(int i=0;i<12;i++)  //Taking input using for loop//
    {
        scanf("%d,", &A[i]); 
    }
    printf("Enter the elements of matrix B(%dx%d): ",m_B,n_B);
    for(int i=0;i<12;i++)
    {
        scanf("%d,", &B[i]);
    }
    printf("The matrix A(%dx%d) is: \n",m_A,n_A);
    for(int i=0;i<4;i++)
    {
        printf("%3d",A[i]);     //%3d is used to create(print) 3 spaces before the number or element//
    }printf("\n");              //printf("\n") ensures that next row elements are printed in next line//
    for(int i=4;i<8;i++)
    {
        printf("%3d",A[i]);     // Example: output for this line is   1  1  1  1  //
    }printf("\n");
    for(int i=8;i<12;i++)
    {
        printf("%3d",A[i]);
    }printf("\n");
    printf("The matrix B(%dx%d) is: \n",m_B,n_B);
    for(int i=0;i<3;i++)
    {
        printf("%3d",B[i]);
    }printf("\n");
    for(int i=3;i<6;i++)
    {
        printf("%3d",B[i]);
    }printf("\n");
    for(int i=6;i<9;i++)
    {
        printf("%3d",B[i]);
    }printf("\n");
     for(int i=9;i<12;i++)
    {
        printf("%3d",B[i]);
    }printf("\n");
    for(int i=0;i<3;i++)
    {
    C[i] = A[0]*B[i] + A[1]*B[i+3] + A[2]*B[i+6] + A[3]*B[i+9]; //Using recurrence relation for multiplying//
    }
    for(int i=0;i<3;i++)
    {
    C[i+3] = A[4]*B[i] + A[5]*B[i+3] + A[6]*B[i+6] + A[7]*B[i+9];
    }
    for(int i=0;i<3;i++)
    {
    C[i+6] = A[8]*B[i] + A[9]*B[i+3] + A[10]*B[i+6] + A[11]*B[i+9];
    }
    printf("The product of above two matrices A,B defined by C = AxB (Order is 3x3) is: \n");
    for(int i=0;i<3;i++)
    {
        printf("%3d",C[i]);
    }printf("\n");
    for(int i=3;i<6;i++)
    {
        printf("%3d",C[i]);
    }printf("\n");
    for(int i=6;i<9;i++)
    {
        printf("%3d",C[i]);
    }printf("\n");
    return 0;
}