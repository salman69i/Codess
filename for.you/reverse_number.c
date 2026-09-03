#include <stdio.h>
int main()
{
    int number, sum = 0, temp, rem;
    printf("enter any number: ");
    scanf("%d", &number);
    temp = number;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    printf("reverse number is: %d", sum);
}