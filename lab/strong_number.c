#include <stdio.h>
int main()
{
    int num, tem, dig, fact, sum = 0;
    while (1)
    {
        printf("enter any number: ");
        scanf("%d", &num);
        tem = num;
        while (tem > 0)
        {
            dig = tem % 10;
            fact = 1;
            for (int i = 1; i <= dig; i++)
            {
                fact = fact * i;
            }
            sum += fact;
            tem = tem / 10;
        }
        if (sum == num)
            printf("%d is a strong number\n", num);
        else
            printf("%d is not a strong number\n", num);
    }
}