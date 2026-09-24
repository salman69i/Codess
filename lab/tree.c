#include <stdio.h>
int main()
{
    int i, j, n, s;
    int num;
    while(1){
        printf("enter any number: ");
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            for (s = 0; s < n - i - 1; s++)
            {
                printf(" ");
            }
            num = 1;
            for (j = 0; j <= i; j++)
            {
                printf("%d ", num);
                num = num * (i - j) / (j + 1);
            }
            printf("\n");
        }
    }
    return 0;
}