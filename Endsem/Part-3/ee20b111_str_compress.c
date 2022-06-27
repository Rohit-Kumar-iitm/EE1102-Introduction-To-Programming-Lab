// C program to compress string//
#include<stdio.h>
#define MAX_STR_LEN 1024
#define MAX_LEN 1024 // gets, fgets(str, sizeof(str), stdin) //
int main()
{
    char str[MAX_STR_LEN];
    char comp_str[MAX_STR_LEN];
    printf("Please enter the string to compress: ");
    gets(str);

    int str_len = 0;
    int i = 0;
    //Finding the length of string//
    while( str[i] !='\0' )
    {
        str_len++;
        i++;
    }
    int num;
    int count[MAX_LEN];
    for(int i=0; i<str_len; i++)
    {
        for(int j= i+1; j<str_len; j++)
        {
            if( str[i] != str[j] )
            {
                num++;
                count[i] = num;
                {
                    comp_str[i] = str[j];
                    break;
                }
            }
        }
    }
    printf("THe compressed string is: ");
    puts(comp_str);
    return 0;
}