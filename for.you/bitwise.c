#include <stdio.h>
int main()
{
    int a, b, c;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);
    c = a & b;
    printf("a&b is %d\n", c);
    c = a | b;
    printf("a|b is %d\n", c);
    c = a ^ b;
    printf("a^b is %d\n", c);
    return 0;
}