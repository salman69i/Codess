#include <stdio.h>
int main()
{
    int num[] = {10, 12, 15, 18, 20}, sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }
    printf("%d\n", sum);
}