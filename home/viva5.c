#include <stdio.h>
int main()
{
    int n = 10, s = 0;
    s = s++;
    scanf("%d", &n);
    s = s * n;
    printf("%d", s);
    return 0;
}