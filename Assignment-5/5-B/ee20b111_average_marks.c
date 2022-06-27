//C program to calculate average marks of students of a class in a course//
#include<stdio.h>
#include<stdlib.h> //As we are using malloc()//
int main()
{
    int num_students; //Number of students in class//
    float *ptr; //ptr is the pointer //
    float sum = 0; //Sum of marks of students, initialised to 0//
    float average; //average marks of class//
    //Taking number of students from user// 
    printf("Please enter the number of students: ");
    scanf("%d", &num_students);
    //Allocating the space to store the marks of students//
    ptr = (float*)malloc(num_students*sizeof(int));
    //Number of students can't be zero//
    if( num_students == 0 )
    {
        printf("Please enter valid number of students.");
    }
    else 
    {
        //Taking marks of the students from user using for loop//
        for(int i = 0; i < num_students; i++)
        {
            printf("Enter the marks of %dth student: ",i+1);
            scanf("%f", &ptr[i]);
            sum = (sum + ptr[i]); //'sum' stores the sum of marks of all the students//
        }
        //Computing the average//
        average = (sum)/(num_students);
        printf("The average marks of the class(in interested course) is %f", average);
    }
    //Free the space allocated earlier to store marks using free()//
    free(ptr);
    return 0;
}