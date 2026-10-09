#include <stdio.h>

int main()
{
    int number, temp, digit, digits = 0;
    long long sum = 0, power;

    printf("Enter a non-negative number: ");
    scanf("%d", &number);

    temp = number;
    while (temp > 0)
    {
        digits++;
        temp = temp / 10;
    }

    if (digits == 0)
        digits = 1;

    temp = number;
    while (temp > 0)
    {
        digit = temp % 10;
        power = 1;

        for (int i = 0; i < digits; i++)
            power = power * digit;

        sum = sum + power;
        temp = temp / 10;
    }

    if (sum == number)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
