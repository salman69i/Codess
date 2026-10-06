#include <stdio.h>
int main()
{
    int i, num;
    long long factorial = 1;
s:
    printf("enter a positive number: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Error! Please enter a positive value.\n");
        goto s;
    }
    else
    {
        while (num > 1)
        {
            factorial *= num;
            num--;
        }
        printf("factorial is: %d", factorial);
    }
    return 0;
}