// C program for the given user menu// 
// User Menu: 1:Factorial , 2:Square , 3:Cube , 0:Exit// 
#include<stdio.h>
int main()
{
    int input;//Integer input from user, input = 0 or 1 or 2 or 3//
    int num;//num is the number on which the operation is to be performed//
    //Setting up a while loop for continuous menu calculation//
    while( input != 0 )//If input = 0 , it does nothing and program is finished//
    {
        printf("USER MENU: ");
        printf("\n   1 : Factorial");//If input = 1, num = 2 ,then 2! = 2//
        printf("\n   2 : Square");//If input = 2, num = 2 ,then 2^2 = 4//
        printf("\n   3 : Cube");//If input = 3, num = 2,then 2^3 = 8//
        printf("\n   0 : Exit");
        printf("\nPlease enter an integer to calculate(based on above user menu): ");
        scanf("%d",&input);
        if( input == 1 ) //FACTORIAL OF GIVEN NUMBER//
        {
            printf("Please enter a positive integer less than 10: ");
            scanf("%d",&num);
            if( num >= 0 && num < 10)
            {
                int i, fact_num = 1; //Initialisation of (num)! = 1//
                for(i=1; i <= num; i++) //Calculating N! using for loop//
                {
                    fact_num = (fact_num)*i; //NOTE : 0! = 1//
                }
                printf("The Factorial of given number = %d! = %d\n",num,fact_num);
            }
            else
            {
                printf("ERROR.WRONG INPUT.\n");
            }
        }
        else if( input == 2 ) //SQUARE OF GIVEN NUMBER//
        {
            long long int num_square;//Square of the number//
            printf("Please enter an integer: ");
            scanf("%d",&num);
            num_square = (num)*(num);
            printf("The Square of given number = (%d)^2 = %lld\n",num,num_square);
        }
        else if( input == 3 ) //CUBE OF GIVEN NUMBER//
        {
            long long int num_cube;//Cube of the number//
            printf("Please enter an integer: ");
            scanf("%d",&num);
            num_cube = (num)*(num)*(num);
            printf("The Cube of given number = (%d)^3 = %lld\n",num,num_cube);
        }
        else if( (input != 1 || input != 2 || input != 3) && (input != 0) )
        {
            printf("ERROR.WRONG INPUT.\n");
        }
    }
    //The loop gets terminated when input = 0//
    return 0;
}    