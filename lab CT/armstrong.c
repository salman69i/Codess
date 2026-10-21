#include <stdio.h>
#include <math.h>
int main()
{
    int n, cnt = 0, orginal, remainder, sum = 0;
    printf("enter any number: ");
    scanf("%d", &n);
    orginal = n;
    int org = n;
    while (n != 0)
    {
        n = n / 10;
        cnt++;
    }
    while (orginal != 0)
    {
        remainder = orginal % 10; // 153
        sum = sum + pow(remainder, cnt);
        orginal = orginal / 10;
    }
    if (sum == org)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}