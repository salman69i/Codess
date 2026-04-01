#include <stdio.h>
int main()
{
    // switch(expression)  case 1.....n
    int a, b;
    printf("Enter two number :");
    scanf("%d%d", &a, &b);

    char ch;
    printf("Enter a operator(+,-,*,/) : ");
    scanf(" %c", &ch);

    switch (ch)
    {
    case '+':
    {
        int sum;
        sum = a + b;
        printf("Addition:%d\n", sum);
        break;
    }
    case '-':
    {
        int sub;
        sub = a - b;
        printf("Substraction:%d\n", sub);
        break;
    }
    case '*':
    {
        int mul;
        mul = a * b;
        printf("Multiplication:%d\n", mul);
        break;
    }
    case '/':
    {
        int div;
        div = a / b;
        printf("Division: %d\n", div);
        break;
    }
    default:
        printf("Invalid operator");
        break;
    }
}