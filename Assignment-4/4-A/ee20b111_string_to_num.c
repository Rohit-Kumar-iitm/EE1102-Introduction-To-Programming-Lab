// C program to convert string (as input) to a number.//
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[1024];double number = 0.0;   //Initialisation of final number to 0.0 and taking max limit of string as 1024//
    double dec=0.0;int ten = 0;int j=0;int i;  //dec is value after a decimal place//
    printf("Please enter a decimal number: "); //Eg:- 11.34 here ten is number of digits after '.' decimal//
    fgets(s, 1024, stdin);
    for(int i=0;s[i]!='\0';i++)
    {
        if( (s[i]>='0' && s[i]<='9') || s[i]=='-' || s[i]=='.')
        {
            for(i=0;s[i] != '\0';++i)
            {
                if(s[i] == '-') continue;
                if(s[i] == '.' && s[i+1] != '\0')
                {
                    for(j = i+1;s[j] != '\0';++j)
                    {
                        dec = (dec*10.0) + (s[j] -'0');
                        ten = j-i;
                    }
                    break;
                }
                else
            {
            number = (number*10.0) + (s[i] -'0');
        }
    }
    double denominator = pow(10, (double)ten); //Eg:- 11.34 = (1134)/100 ; 100 is the denominator//
    double temp = number*denominator;
    temp += dec;
    number = temp/denominator;
    switch(s[0]){
        case '-':
        printf("Number in the string is %lf",(-1)*number);
        break;

        default:
        printf("Number in the string is %lf",number);
    }
    }
    else
    printf("ERROR ENTER ONLY DECIMAL NUMBERS.");
    break;
    }
    return 0;
}