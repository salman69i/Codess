#include<stdio.h>
int main()
{
    int nmb1=10;
    int nmb2=5;
    int temp;

    temp = nmb1;
    nmb1 = nmb2;
    nmb2 = temp;
    printf("Num1 = %d\n",nmb1);
    printf("Num2 = %d",nmb2);
}

