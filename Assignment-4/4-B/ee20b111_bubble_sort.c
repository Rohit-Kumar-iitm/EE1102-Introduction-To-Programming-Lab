//Sorting the elements of an array using bubble sort algorithm(4-B,Q-2)//
#include<stdio.h>
int main()
{
    float number[10];float temp; //temp is some temporary variable used in the loop// 
    printf("Please enter 10 numbers.\n");
    for(int i=0; i<10; i++)   //Taking input using for loop//
    {
        printf("Enter the %dth number: ",i+1);
        scanf("%f",&number[i]);
    }printf("\n");
    //BUBBLE-SORT ALGORITHM : SWAPPING TWO INTEGERS IF REQUIRED ORDER IS NOT CORRECT//
    for(int i=0; i<10; i++) //for loop running through all elements of array//
    {
        for(int j=i+1; j<10; j++)//for loop starts from the numbers below the given number a[i]//
        {
            if( number[i] < number[j] ) //Comparing the number with the numbers below it//
            {
                temp = number[i];       
                number[i] = number[j];  //If the order is not followed ,the numbers are swapped using the temp variable// 
                number[j] = temp;      //Eg: for 356 : it compares 3,5 and swaps them as 3<5 it becomes 536 and so on//
            }
        }
    }//Algorithm ends when the numbers gets sorted in descending order in the array//
    printf("The entered numbers in descending(decreasing) order is: \n");
    for(int i=0; i<10; i++) //Output using for loop//
    {
        printf("%f\n",number[i]);
    }
    return 0;
}