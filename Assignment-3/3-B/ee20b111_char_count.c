//Reading the characters and counting in numbers using do-while loop//
#include<stdio.h>
int main()
{
    char s;int val,alphabets = 0,digits = 0,symbol = 0; //Initialisation step (Assigning values)//
    printf("Please enter the characters to be counted(end it with a '?'): ");
    do
    {
        scanf("%c", &s);
        val = s;  //To be declared inside loop//
        if( (val>='a' && val<='z') || (val>='A' && val<='Z') ) // 'a' this gives the ascii value of a//
        {
            alphabets++;   //alphabets = alphabets + 1//
        }
        else if( val>='0' && val<='9' )
        {
            digits++;
        }
        else 
        {
            symbol++;
        }   
    }while(val !='?');   
    printf("Number of alphabets in input = %d\n",alphabets);
    printf("Number of digits in input = %d\n",digits);
    printf("Number of symbols in input = %d\n",symbol);
    printf("Total number of characters in input = %d\n",alphabets + digits + symbol);
    return 0;
}