#include <stdio.h>
int main()
{

    double a, b;

    printf("enter two numbers: ");
    scanf("%lf %lf", &a, &b);
    char operator;
    printf("enter any operator (+,-,*,/): ");
    scanf(" %c", &operator);

    switch (operator)
    {
    case '+':
    {
        double sum;
        sum = a + b;
        printf("sum is %lf", sum);
        break;
    }
    case '-':
    {
        double sub;
        sub = a - b;
        printf("subtraction is %lf", sub);
        break;
    }
    case '*':
    {
        double mul;
        mul = a * b;
        printf("multiplication is %lf", mul);
        break;
    }
    case '/':
    {
        double div;
        div = a / b;
        printf("division is %.2lf", div);
        break;
    }
    default:
        printf("invalid choice");
    }

    return 0;
}