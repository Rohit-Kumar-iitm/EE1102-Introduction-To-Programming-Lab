//C program to create a given string into a new required encrypted string//
#include<stdio.h>
#include<string.h>
#define MAX_STR_LEN 1024
int main()
{
    char str[MAX_STR_LEN];//str is the string taken from user//
    char rev_str[MAX_STR_LEN]; //rev_str is the reversed and final encrypted string//
    //Getting the string from user using gets()//
    printf("Enter the string to convert: ");
    gets(str);
    int len_str; //Length of string//
    //Getting the length of string using strlen()//
    len_str = strlen(str);
    //Encrypting the whole string using for loop and multiple if,else if statements begins//
    for(int i=0; str[i] !='\0'; i++)
    {
        if( str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = str[i] - ('a' - 'A');
            //'a' - 'A' gives 32 which is the difference between lower and uppercase alphabets//
        }
        else if( str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] - ('A' - 'a');
            //Similar to small case calculation//
        }
        else if( str[i] >= '0' && str[i] <= '9')
        {
            str[i] =  '9' - str[i] + '0';
            //By induction, we get this ('0' must be added)//
        }
        else if( str[i] =='+' || str[i] =='-' || str[i] =='*' || str[i] =='/')
        {
            switch( str[i] )
            {
                case '+':
                str[i] = '/';break;
                case '/':
                str[i] = '+';break;
                case '*':
                str[i] = '-';break;
                case '-':
                str[i] = '*';break;
            }//Using switch case statement to change characters//
        }
        else if( str[i] ==' ' || str[i] =='$' )
        {
            switch( str[i] )
            {
                case '$':
                str[i] = ' ';break;
                case ' ':
                str[i] = '$';break;
            }//Again using switch case statement to change characters//
        }
    }//Encrypting the string finished//
    //Now reversing the string using for loop//
    int str_begin, str_end;
    str_end = len_str - 1;
    //As arrays start from str[0] and goes till str[str_len-1], and str[str_len] ='\0'//
    for( str_begin =0; str_begin < len_str; str_begin++)
    {
        rev_str[str_begin] = str[str_end]; //Induction or reccurence; Eg: rev_str[0]=str[str_len-1]
        str_end--;
    }
    //Terminating the reversed string by '\0'//
    rev_str[str_begin] = '\0';
    //Printing the reversed and finally encrypted string using puts()//
    printf("Encrypted string is: ");
    puts(rev_str);
    return 0;
}