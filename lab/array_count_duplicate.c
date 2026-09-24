#include <stdio.h>
int main()
{
    int a[10], even[10], odd[10];
    int n, i, j, count=0;
    printf("enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }
    printf("number of duplicate elements: %d", count);
    return 0;
}