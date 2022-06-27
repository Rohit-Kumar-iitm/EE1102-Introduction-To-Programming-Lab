// C program to print the characters in a string in reverse order(6-B,Q-3) using pointers//
#include<stdio.h>
#include<string.h> //The program uses strlen() function//
#define MAX_STR_LEN 200
int main()
{
    char str[MAX_STR_LEN]; //Declaring the string//
    
    //Getting the string from user using gets() function//
    printf("\nPlease enter the string(characters): ");
    gets(str);

    //Declaring a pointer of type char//
    char *p = str; // p = &str[0] i.e., pointer points to first element//

    // Declaring the reversed string//
    char rev_str[MAX_STR_LEN];
    
    //Declaring a pointer for reversed string//
    char *p_rev = rev_str; // p_rev = &rev_str[0]//
    
    //Finding the length of string using strlen() function //
    int str_len = strlen(str);

    int i = 0; //Relating to reversed string rev_str //
    int j = str_len - 1; //Related to original string str//
    //As arrays start from str[0] and goes till str[str_len-1], and str[str_len] ='\0'//
    
    // Setting up for loop to reverse string using pointers//
    for( i=0; i < str_len; i++)
    {
        *(p_rev + i) = *(p + j); //Since, a[k] == *(a + k) ; Both are equivalent statements//
        //Using recurrence: rev_str[0] = str[str_len-1] and so on ...//
        j--; 
    }
    
    //Terminating the reversed string using '\0' //
    *(p_rev + str_len) = '\0'; 
    
    //Printing the given string using puts() function//
    printf("The given string is: ");
    puts(str);

    //Printing the reversed string using puts() function//
    printf("The reversed string is: ");
    puts(rev_str);
    
    return 0;
}