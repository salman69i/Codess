#include <stdio.h>
int main()
{
    while(1)
    {
        int num1, num2, rem, gcd, lcm, n1, n2;
        printf("enter two numbers: ");
        scanf("%d%d", &num1, &num2);
        n1 = num1;
        n2 = num2;
        while (n2 != 0)
        {
            rem = n1 % n2;
            n1 = n2;
            n2 = rem;
        }
        gcd = n1;
        lcm = (num1 * num2) / gcd;
        printf("GCD is %d\n", gcd);
        printf("LCM id %d\n", lcm);
    }
}