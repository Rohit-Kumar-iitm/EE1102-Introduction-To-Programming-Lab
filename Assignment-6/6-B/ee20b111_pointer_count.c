// C program to count number of vowels, consonants, and special characters in a string(6-B,Q-2)//
#include<stdio.h>
#define MAX_STR_LEN 1024

//char_count() function prototype//
void char_count(char *,int *,int *,int *); //Function which counts different types of characters//

//is_vowel() function prototype//
int is_vowel(char );

//is_consonant() function prototype//
int is_consonant(char );

int main()
{
    char str[MAX_STR_LEN];

    //Getting the string from user using fgets() as we need to count newline if it is present//
    printf("\nPlease enter the string(characters): ");
    fgets(str, sizeof(str), stdin);
    
    char *ptr = str; //Declaring pointer of character type//
    //ptr = &str[0]; // ptr points to first element of the string// 

    int num_vowels; //Number of vowels in the string//
    int num_consonants; //Number of consonants in the string//
    int num_spl_char; //Number of special chracters in the string//

    //Powerful function char_count() gives all three required numbers directly//
    char_count(str, &num_vowels, &num_consonants, &num_spl_char);
    
    //Printing the output for vowels(using '-') using for loop //
    printf("\nVowels            : ");
    for( int i=0; i < num_vowels; i++)
    {
        printf("-");
    }

    //Printing the output for consonants(using '-') using for loop //
    printf("\nConsonants        : ");
    for( int i=0; i < num_consonants; i++)
    {
        printf("-");
    }
    
    //Printing the output for special characters(using '-') using for loop //
    printf("\nSpecial Characters: ");
    for( int i=0; i < num_spl_char; i++)
    {
        printf("-");
    }
    printf("\n");
    return 0;
}
//count_char() function declaration//
//Pass by reference: Passing the addresses rather than values//
void char_count(char *p,int *a,int *b,int *c)
{
    //Declaration cum Initialisation of number of count variables//
    int num_vowels = 0;
    int num_consonants = 0;
    int num_spl_char = 0;
    
    char s;
    int val_vowel;// True/False variable(0 or 1) which tells if a character is vowel or not//
    int val_consonant;// True/False variable(0 or 1) which tells if a character is consonant or not//
    
    //Using do-while loop to count the various characters//
    do //do-while because we need to check for every character for it being vowel,consonant, etc.. or not//
    {
        s = *p;
        val_vowel = is_vowel(s); //Calling is_vowel() function to check for vowel//
        val_consonant = is_consonant(s); //Calling is_consonant() function to check for consonant//
        
        if( val_vowel == 1 )
        {
            num_vowels++; //If 's' is a vowel then increment by one//
        }
        else if( val_consonant == 1 )
        {
           num_consonants++; //If 's' is a consonant then increment by one//
        }
        else 
        //If 's' is neither vowel nor consonant then it is taken as special character//
        {
           num_spl_char++; //If 's' is a special character then increment by one//
        }
        //Updating the address of the pointer//
        p++;
    }while( s != '\0' );
    
    *a = num_vowels; // a points to the address of num_vowels// 
    *b = num_consonants; // b points to the address of num_consonants//
    *c = num_spl_char - 1; // c points to the address of num_spl_char//
    //num_spl_char - 1 is done because of the nature of do-while loop, the special character is counted extra by 1// 

}

// is_vowel() function declaration//
int is_vowel(char s)
{
    //Using if statement for checking whether a character is a vowel or not//    
    //Vowel: a,e,i,o,u,A,E,I,O,U//
    if( s =='a' || s =='e' || s =='i' || s =='o' || s =='u' || s =='A' || s =='E'|| s =='I' || s =='O' || s =='U' )
    {
        return 1; //If characeter is vowel it will return 1(TRUE)//
    }
    return 0; //Else it will return 0(FALSE)//
}

// is_consonant() function declaration//
int is_consonant(char s)
{
    //Using if statements for checking whether a character is consonant or not//
    if( (s >='a' && s <='z') || ( s >='A' && s <='Z') )
    {
        if( s!='a' || s!='e' || s!='i' || s!='o' || s!='u' || s!='A' || s!='E'|| s!='I' || s!='O' || s!='U' )
        {
            return 1; //If characeter is consonant it will return 1(TRUE)//
        }
    }
    return 0; //Else it will return 0(FALSE)//
}