//C program to swap two integer variables using functions//
#include<stdio.h>

//swap() function prototype//
void swap(int *, int *);

//Main() function declaration//
int main()
{
    int var1 = 5; //Assigning the values to the two integers//
    int var2 = 10;

    //Printing output before swapping//
    printf("\nThe values before swapping are: %d,%d\n", var1, var2);

    //Calling function swap() //
    swap(&var1,&var2);

    //Printing the output after swapping//
    printf("The values after swapping are: %d,%d\n", var1, var2);

    return 0;
}
// swap() function declaration//
void swap(int *a, int *b)
{
    //Pass by reference rather than values//
    
    int c; //Temporaray variable used for swapping//
    c = *a; //c takes the value *a//
    *a = *b; //*a takes the value of *b//
    *b = c; //*b now takes the value of c , which is *a//
}