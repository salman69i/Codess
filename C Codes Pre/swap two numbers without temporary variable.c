#include<stdio.h>
int main()
{
    int nmb1=10;
    int nmb2=5;

    nmb1 = nmb1-nmb2; // 10-5=5
    nmb2 = nmb1 + nmb2; //5+5=10
    nmb1 = nmb2 - nmb1; //10-5=5     so nmb1 became 5 and nmb2 became 10

    printf("Num1 = %d\n",nmb1);
    printf("Num2 = %d",nmb2);
}


