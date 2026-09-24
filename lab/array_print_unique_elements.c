#include <stdio.h>

int main()
{
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        printf("Invalid array size!\n");
        return 1;
    }

    int arr[n];
    int visited[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    int uniqueCount = 0;


    for (int i = 0; i < n; i++)
    {
      
        if (visited[i] == 1)
        {
            continue;
        }

        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        if (count == 1)
        {
            printf("%d ", arr[i]);
            uniqueCount++;
        }
    }

    if (uniqueCount == 0)
    {
        printf("No unique elements found in the array.");
    }

    printf("\n\nTotal unique elements: %d\n", uniqueCount);

    return 0;
}