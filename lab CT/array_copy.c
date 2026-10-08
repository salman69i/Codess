#include <stdio.h>
int main()
{
    int a[10], b[10], n, i;
    printf("enter te number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        b[i] = a[i];
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}