#include <stdio.h>
int main()
{
    int num1, num2, num1t, num1o, num2t, num2o;
    while (1)
    {
        printf("enter two numbers: ");
        scanf("%d %d", &num1, &num2);
        num1t = num1 / 10;
        num1o = num1 % 10;
        num2t = num2 / 10;
        num2o = num2o % 10;
        if (num1t == num2o || num1t == num2t || num1o == num2o || num1o == num2t)
        {
            printf("true\n");
        }
        else
            printf("false\n");
    }
    return 0;
}