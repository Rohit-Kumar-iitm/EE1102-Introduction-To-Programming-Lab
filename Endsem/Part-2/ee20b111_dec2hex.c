//C program to convert a whole number to hexadecimal equivalent//
#include<stdio.h>
#include<stdlib.h>
#define MAX_STR_LEN 1024
// hex_length() function prototype//
int hex_length(int );

// dec2hex() function prototype//
void dec2hex(int ,int ,char *);

//Main function declaration//
int main()
{
    int num;

    //getting input from user//
    printf("Please enter a whole number(>=0): ");
    scanf("%d", &num);

    int num_char = hex_length(num);//Number of characters in hexadec equivalent//
    char *str;
    
    dec2hex(num,num_char,str);
    printf("%d",hex_length(num));
    printf("The Hexadecimal equivalent number is: ");
    
    for(int i= num_char-1; i>=0; i--)
    {
        printf("%c", *(str + i));
    }

    return 0;
}
// hex_length() function prototype//
int hex_length(int N)
{
    int L=0;//Number of characters in hexadecimal input//
    int rem;

    int quo = N;

    while( quo != 0 )
    {
        rem = quo%16;
        L++;
    }
    return L;
}
//dec2hex() function declaration//
void dec2hex(int N,int L, char *p)
{
    
    char *b;
    b = (char *)malloc(L*sizeof(char));

    int rem,quo = N;
    int j=0;
    while( quo != 0 )
    {
        rem = quo%16;
        if( rem < 10 )
        {
            b[j++] = 48+ rem;
        }
        else
        {
            b[j++] = 55 + rem;
        }
        quo = quo/16;
        
    }
    b[L] = '\0';
    *p = *b;
    free(b);
}