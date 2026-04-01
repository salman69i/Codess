#include<stdio.h>
int main()
{
    float C,F;
    printf("Enter fahrenheit temperature :");
    scanf("%f",&F);
    C = ((F-32)*5)/9;
    printf("Celcious temperature is = %f",C);

}

