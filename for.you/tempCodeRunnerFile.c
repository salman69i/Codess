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