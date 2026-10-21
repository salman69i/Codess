#include <stdio.h>
int main()
{
    int n, a[100], temp, i, j, value, pos;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the insert: ");
    scanf("%d", &value);
    pos = 0;
    while (pos < n && a[pos] < value)
    {
        pos++;
    }
    for (i = n; i > pos; i--)
    {
        a[i] = a[i - 1];
    }
    a[pos] = value;
    n++;
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
}