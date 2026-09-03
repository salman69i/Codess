#define STUDENT 5
#include<stdio.h>
void main()
{
    float marks[STUDENT], average = 0.0, summation = 0.0;
    int counter;
    for (counter = 0; counter < STUDENT; counter++)
        scanf("%f", &marks[STUDENT]);
    for (counter = 0; counter < STUDENT; counter++)
        summation += marks[counter];
    average = summation / STUDENT;
    printf("average is: %f", average);
}
// #include <stdio.h>

// #define STUDENT 5

// int main()
// {
//     float marks[STUDENT], average = 0.0, summation = 0.0;
//     int counter;

//     // Reading marks into the array
//     printf("Enter marks for %d students:\n", STUDENT);
//     for (counter = 0; counter < STUDENT; counter++)
//     {
//         printf("Student %d: ", counter + 1);
//         scanf("%f", &marks[counter]); // Used 'counter' instead of 'STUDENT'
//     }

//     // Calculating total summation
//     for (counter = 0; counter < STUDENT; counter++)
//     {
//         summation += marks[counter];
//     }

//     // Calculating average
//     average = summation / STUDENT;

//     // Displaying the result
//     printf("\nAverage is: %.2f\n", average);

//     return 0;
// }