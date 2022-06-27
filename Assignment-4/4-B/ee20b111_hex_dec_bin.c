//C Program to convert hexadecimal number to it's equivalent decimal and binary number//
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX_LEN 1024
int main()
{
    char hex[MAX_LEN]; //hex: indicates that it is hexadecimal//
    int i,val, len; //Val is a temporary variable used//
    long long int dec = 0; //dec is decimal number equivalent of hex, initialised to 0//
    printf("Please enter a hexadecimal number: ");
    gets(hex); //input from user//
    len = strlen(hex) - 1; //Finding length of total number of hex digit//
    //Converting HEX to DEC(decimal) starts//
    for(i=0; hex[i] !='\0'; i++)
    {
        if( (hex[i]>='0' && hex[i]<='9')||(hex[i]>='a' && hex[i]<='f')||(hex[i]>='A' && hex[i]<='F')||hex[i]=='-'||hex[i]=='.')
        {
            for(i=0; hex[i] !='\0'; i++) //hex to dec conversion//
            {
                if( hex[i]>='0' && hex[i]<='9')
                {
                    val = hex[i] - 48; //ASCII code of '0' is 48//      
                }
                else if( hex[i]>='a' && hex[i]<='f')
                {  
                    val = hex[i] - 97 + 10; //ASCII Value : 'a' = 97 and for new line it is 10//
                }
                else if( hex[i]>='A' && hex[i]<='F')
                {
                    val = hex[i] - 65 + 10; //ASCII Value : 'A' = 65 and for new line it is 10//
                }
                dec = dec + (val)*(pow(16, len));//hex is a 16 base system//
                len--;
            }
        }
    }
    //Converting HEX to BIN(binary) starts//
    for(i=0; hex[i] !='\0';i++)
    {
        if( (hex[i]>='0' && hex[i]<='9')||(hex[i]>='a' && hex[i]<='f')||(hex[i]>='A' && hex[i]<='F')||hex[i]=='-'||hex[i]=='.')
        {
            switch(hex[0])
            {
                case '-':
                printf("The Binary Equivalent is -");break;
                default:
                printf("The binary Equivalent is ");    
            }break;
        }
    }
    for(i=0; hex[i] !='\0';i++) 
    {  
        switch(hex[i])
        { //Using switch-case statements to print individual binary code of hex digit//
            case '0':
            printf("0000");break;
            case '1':
            printf("0001");break;
            case '2':
            printf("0010");break;
            case '3':
            printf("0011");break;
            case '4':
            printf("0100");break;
            case '5':
            printf("0101");break;
            case '6':
            printf("0110");break;
            case '7':
            printf("0111");break;
            case '8':
            printf("1000");break;
            case '9':
            printf("1001");break;
            case 'A':
            printf("1010");break;
            case 'B':
            printf("1011");break;
            case 'C':
            printf("1100");break;                                                                                       
            case 'D':
            printf("1101");break;
            case 'E':
            printf("1110");break;
            case 'F':
            printf("1111");break;
            case 'a':
            printf("1010");break;
            case 'b':
            printf("1011");break;
            case 'c':
            printf("1100");break;
            case 'd':
            printf("1101");break;
            case 'e':
            printf("1110");break;
            case 'f':
            printf("1111");break;
            case '-':
            continue; //If '-' comes it does nothing but continues the program//
            default:
            printf("ERROR.INVALID INPUT.");break;                              
        }
    }printf(".\n");
    for(i=0; hex[i] !='\0';i++) //Printing decimal equivalent number//
    {
        if( (hex[i]>='0' && hex[i]<='9')||(hex[i]>='a' && hex[i]<='f')||(hex[i]>='A' && hex[i]<='F')||hex[i]=='-'||hex[i]=='.')
        {
            switch(hex[0])
            {
                case '-':
                printf("The Decimal Equivalent is -%lld.",dec);break;
                default:
                printf("The Decimal Equivalent is %lld.",dec);    
            }break;
        }
        else
        {
            printf("ERROR.INVLAID INPUT");
        }break;
    } 
    return 0;
}

