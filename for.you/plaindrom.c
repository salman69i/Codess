#include <stdio.h>
int main()
{
    while (1)
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
        if (number == sum)
            printf("palindrome\n");
        else
            printf("not a palindrome\n");
    }
}