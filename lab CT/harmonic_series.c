#include <stdio.h>
int main()
{
    int i, n;
    double sum = 1.0;
    printf("enter the number of inputs: ");
    scanf("%d", &n);
    printf("1 + ");
    for (i = 2; i <= n; i++)
    {
        if (i < n)
        {
            printf("1/%d + ", i);
        }
        else
        {
            printf("1/%d = ", i);
        }
        sum += 1.0 / i ;
    }
    printf("%.4f", sum);
    return 0;
}