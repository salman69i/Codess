#include <stdio.h>
int main()
{
    int first = 0, second = 1, count = 1, n, next;
    printf("enter the number you want to get fibonacci of: ");
    scanf("%d", &n);
    while (count <= n)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
        count++;
    }
    return 0;
}