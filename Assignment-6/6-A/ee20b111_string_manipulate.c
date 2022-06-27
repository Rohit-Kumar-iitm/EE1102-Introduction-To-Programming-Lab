//C program to manipulate strings by creating own functions(user-defined) (6-A,Q-1)//
#include<stdio.h>
#define MAX_STR_LEN 1024
//strlen function prototype//
int strlen(char *);
//strcpyn function prototype//
void strcpyn(char *,char *);
//strcmpn function prototype//
int strcmpn(char * ,char *);
int main()
{
    char str[MAX_STR_LEN];
    char *ptr = str; //Temporary pointer,ptr to store string,str//
    int str_len; //Length of string//
    //Getting the string from the user using fgets()//
    printf("Please enter the string(characters): ");
    fgets(str, MAX_STR_LEN, stdin);
    //Getting length of the string using defined strlen() function//
    str_len = strlen(str);
    printf("The length of the string(n1) is %d.\n",str_len);
    //Copying the first n2 characters of string using defined strcpyn() function //
    char copy_str[MAX_STR_LEN];
    strcpyn(str,copy_str);
    //Printing the copied string using puts()//
    puts(copy_str);
    //Comparing two strings using defined strcmpn() function//
    char str_cmp[MAX_STR_LEN];
    printf("Please enter a string to compare: \n");
    fgets(str_cmp, MAX_STR_LEN, stdin);
    strcmpn(str,str_cmp);
    int count;
    if( count == 1)
    printf("1: Match");
    else printf("0: No Match"); 
    return 0;
}
// strlen function declaration//
int strlen(char *p) 
{
    int n1 = 0; // n1: Length of the string//
    while( *p !='\0' ) // p = &str[0]//
    {
        n1++;
        p++;// Updating the address of string//
    }
    n1--;// This is done because the function fgets includes newline character(\n)//
    return n1;// So, length is decremented by one and then returned//
}
//strcpyn function declaration//
void strcpyn(char *p,char *p_copy)
{
    int n2; //n2: The first n2 characters of str to be copied//
    int n1 = strlen(p); //Length of original string (here p=str)//
    //Taking input of n2 from user//
    printf("Please enter the number of characters to be copied(from left)(n2): ");
    scanf("%d",&n2);
    // Proper condition to copy is : n2 <= n1 or n1 >= n2 //
    if( (n2 <= n1) && (n2 != 0) )
    {
        printf("The first %d(n2) characters of the string is: ",n2);
        while( *p !='\0' )
        {
            *p_copy = *p;//We are copying them//
            p++;   //Updating the address of string//  
            p_copy++; //Updating the address of copied string//
            n2--;//Decrementing n2//
            if( n2== 0 ) break;// When n2=0 ,copying stops and required n2 characters are copied//
        }
        *p_copy ='\0';
    }
    else
    printf("ERROR.NUMBER OF CHARACTERS TO COPY EXCEEDS THE STRING LENGTH");
}
//strcmpn function declaration//
int strcmpn(char *p,char *p_new)
{
    int n3; int i=0; int count=0;//True/False variable//
    //Taking input from user the str_cmp//
    char str_cmp[MAX_STR_LEN];
    printf("Please enter a string to compare: \n");
    fgets(str_cmp, MAX_STR_LEN, stdin);
    *p_new = str_cmp;
    printf("Please enter number of characters to be compared from left(n3): ");
    scanf("%d",&n3);
    while( *p !='\0' && *p_new !='\0')
    {
        if( *p != *p_new)
        {
            count = 1;//Stop iterating when different characters are obtained using break//
            break;
        }
        i++;
        n3--;
        if( n3 == 0) break;
    }
    return count;
}