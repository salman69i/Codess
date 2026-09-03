// #include <stdio.h>
// int main()
// {
//     int a[5], sum = 0, i;
//     printf("enter 5 numbers: ");
//     for (i = 0; i < 5; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     for (i = 0; i < 5; i++)
//     {
//         sum = sum + a[i];
//     }
//     printf("the sum is: %d\n", sum);
//     printf("average is: %.2f", (float)sum / 5);
// }
#include <stdio.h>
int main()
{
    int a[100], sum = 0, i,n;
    printf("enter how many numbers: ");
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("the sum is: %d\n", sum);
    printf("average is: %.2f", (float)sum / n);
}