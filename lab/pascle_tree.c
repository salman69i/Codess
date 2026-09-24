#include <stdio.h>

int main()
{
    int a, d, n, i, term;

    printf("Enter the first term: ");
    scanf("%d", &a);

    printf("Enter the common difference: ");
    scanf("%d", &d);

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("AP Series: ");

    for (i = 1; i <= n; i++)
    {
        term = a + (i - 1) * d;
        printf("%d ", term);
    }

    return 0;
}