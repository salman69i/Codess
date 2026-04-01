#include <stdio.h>
int main()
{
    int n;
    printf("enter the number :");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += i;
    }
    printf("summation %d \n", sum);

    return 0;
}