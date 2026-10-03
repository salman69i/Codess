#include <stdio.h>
int main()
{
    int i, j, rows, num = 1;
    printf("enter number of rows: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (int s = 1; s <= rows - i; s++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }
}