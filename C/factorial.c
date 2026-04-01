#include <stdio.h>
int main()
{
    long long factorial = 1;
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("factorial is = %d", factorial);
    return 0;
}
