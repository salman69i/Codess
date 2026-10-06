#include <stdio.h>
int main()
{
    int sum = 0, num;
    printf("enter any number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }
    if (sum == num && num > 0)
    {
        printf("perfect number");
    }
    else
    {
        printf("not a perfect number");
    }
    return 0;
}