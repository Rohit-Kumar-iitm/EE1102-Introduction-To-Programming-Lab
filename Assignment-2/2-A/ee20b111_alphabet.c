//ASCII code of an alphabet//
#include<stdio.h>
int main()
{
    char alphabet,a1,a2,a3,a4,a5;
    printf("Please enter an alphabet: ");
    scanf("%c",&alphabet);
    if((( alphabet >= 65 )&&( alphabet <= 90 ))||(( alphabet >= 97 )&&( alphabet <= 122 )))
    {
        printf("The ASCII code of the given alphabet %c is: %d",alphabet,alphabet);
        if( alphabet%2==0 )
        {
            printf("\nThe ASCII code is even.");
            a1=alphabet+1;
            a2=alphabet+2;
            a3=alphabet+3;
            a4=alphabet+4;
            a5=alphabet+5;
            printf("\nThe next five ASCII values are %c,%c,%c,%c,%c",a1,a2,a3,a4,a5);  
        }
        else
        printf("\nThe ASCII code is odd.");
    }
    else
    printf("Error, Please enter only alphabets.");
    return 0;
}