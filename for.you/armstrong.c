// #include <stdio.h>
// int main()
// {
//     int number, sum = 0, temp, rem;
//     printf("enter any number: ");
//     scanf("%d", &number);
//     temp = number;
//     while (temp != 0)
//     {
//         rem = temp % 10;
//         sum = sum + rem * rem * rem;
//         temp = temp / 10;
//     }
//     if (number == sum)
//         printf("armstrong number");
//     else
//         printf("not a armstrong number");
// }
// #include <stdio.h>
// int main()
// {
//     int sum = 0, number, rem, temp;
//     printf("enter any number: ");
//     scanf("%d", &number);
//     temp = number;
//     while (temp != 0)
//     {
//         rem = temp % 10;
//         sum = sum + rem * rem * rem;
//         temp = temp / 10;
//     }
//     if (number == sum)
//         printf("armstrong number");
//     else
//         printf("not a armstrong number");
// }
// #include <stdio.h>
// int main()
// {
//     int initialNum, FinalNum, temp, sum = 0, i, rem;
//     printf("initial number: ");
//     scanf("%d", &initialNum);
//     printf("initial number: ");
//     scanf("%d", &FinalNum);
//     for (i = initialNum; i <= FinalNum; i++)
//     {
//         temp = i;
//         while (temp != 0)
//         {
//             rem = temp % 10;
//             sum = sum +  rem * rem * rem;
//             temp = temp / 10;
//         }
//         if (sum == i)
//         {
//             printf("%d ", i);
//         }
//         sum = 0;
//     }
// }
#include <stdio.h>
#include <math.h>
int main()
{
    int num, temp, rem, sum = 0, digitCount = 0;
    printf("Enter any positive integer: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0)
    {
        temp = temp / 10;
        digitCount++;
    }
    printf("%d has %d digits\n", num, digitCount);
    temp = num;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + (int)round(pow(rem, digitCount));
        temp = temp / 10;
    }
    if (num == sum)
    {
        printf("%d is an armstrong number", num);
    }
    else
    {
        printf("%d is not an armstrong number", num);
    }
}