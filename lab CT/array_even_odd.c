#include <stdio.h>
int main()
{
    int arr[100], even[100], odd[100];
    int i, n, j = 0, k = 0;
    printf("enter number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            j++;
        }
        else
        {
            odd[k] = arr[i];
            k++;
        }
    }
    for (i = 0; i < j; i++)
    {
        printf("%d ", even[i]);
    }
    printf("\n");
    for (i = 0; i < k; i++)
    {
        printf("%d ", odd[i]);
    }
    return 0;
}