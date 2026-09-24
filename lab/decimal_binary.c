
#include <stdio.h>
int main()
{
    int n, rem, bin = 0, value = 1;
    printf("enter any number: ");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 2;
        bin = bin + rem * value;
        n = n / 2;
        value = value * 10;
    }
    printf("binary is: %d", bin);
}
