// C program demonstrating various featutres of pointer(6-B,Q-1)//
#include<stdio.h>
int main()
{
    int myArray[] = {1,24,17,4,-5,100}; //ARRAY used in the program(made up of integers)//
    int *ptr; //Declaring pointer of integer type//
    ptr = &myArray[0]; //Pointer points to the address of 1st element or myArray[0]//
    
    int num_elem; //Number of elements in array//
    
    //Calculating number of elements in array using sizeof() //
    num_elem = sizeof(myArray)/sizeof(int); 
    
    //Printing the size of array//
    printf("\nThe number of elements in the array is(size) %d\n",num_elem);
    
    //Printing the memory location of the elements along with their values stored using pointers//
    printf("The array elements are as follows: \n");
    
    //Using for loop for this purpose//
    for( int i=0; i < num_elem; i++)
    {
        // *ptr can be treated like a variable //
        printf("%d.) The element located at %p is %d\n", i+1, ptr, *ptr);
        
        //Updating the address of pointer, Eg: ptr points to myArray[0], ptr++ points to myArray[1]//
        ptr++; //pointer algebra(increment by one)//
    }
    
    return 0;
}