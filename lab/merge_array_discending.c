#include <stdio.h>
int main()
{
    int n, a[100], b[100], c[100], temp, i, j;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        c[n + i] = b[i];
    }
    for (i = 0; i < 2 * n - 1; i++)
    {
        for (j = i + 1; j < 2 * n; j++)
        {
            if (c[i] < c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    for (i = 0; i < 2 * n; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n");
}
