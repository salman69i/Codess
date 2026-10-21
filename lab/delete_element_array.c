#include <stdio.h>
int main()
{
    int n, a[100], temp, i, j, pos;
    printf("enter a number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the value to delete: ");
    scanf("%d", &pos);
    if (pos < 1 || pos > n)
    {
        printf("invalid postion");
    }
    else
    {
        for (i = pos - 1; i < n - 1; i++)
        {
            a[i] = a[i + 1];
        }
        n--;
        for(i = 0;i<n;i++)
        {
            printf("%d ",a[i]);

        }
    }
}