#include <stdio.h>

int main()
{
    int start, end, i, j, count;
    printf("Start: ");
    scanf("%d", &start);
    printf("End: ");
    scanf("%d", &end);
    for (i = start; i <= end; i++)
    {
        count = 0;
        if (i <= 1)
            count++;
        else
        {
            for (j = 2; j < i; j++)
            {
                if (i % j == 0)
                {
                    count++;
                    break;
                }
            }
        }
        if (count == 0)
            printf("%d",i);
        }
    return 0;
}