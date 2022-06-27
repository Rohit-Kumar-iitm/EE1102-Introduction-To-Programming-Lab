//C program to concatenate the characters of two strings and make a new single string(5-A,Q-2)//
#include<stdio.h>
#define MAX_LEN 20 //Fixing the maximum limit to take only 20 characters from each string//
int main()
{
    char str1[MAX_LEN], str2[MAX_LEN];//str1 = first string, str2 = second string//
    char str3[40]; //New concatenated string of str1 and str2 , max size of string = 2*20 = 40// 
    printf("Please enter ths characters of first string: ");
    gets(str1); //Using gets() function to get the string 1//
    printf("Please enter ths characters of second string: ");
    gets(str2); //Using gets() function to get the string 2//    
    int i=0, j=0; //Initialisation//
    //Using while loop to insert string 1 in string 3//
    while( str1[i] !='\0' ) //every string is terminated by '\0'//
    {
        str3[j] = str1[i];
        i++;
        j++;
    } //i here(at end of loop) gives length of string 1//
    //Again using while loop to insert string 2 in concatenated string 3//
    i=0;//Initialised to zero as str2[MAX_LEN] starts from str2[0]//
    while( str2[i] !='\0' )
    {
        str3[j] = str2[i]; //Same j is being carried from previous while loop//
        i++;
        j++;
    } //j here(at end of loop) gives length of string 3 and i here gives length of string 2//
    str3[j] = '\0'; /*TERMINATING THE STRING 3 USING'\0'*/
    puts(str3);  //Using puts() function to print the concatenated string 3// 
    return 0;
}