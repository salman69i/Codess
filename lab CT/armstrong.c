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
//         printf("armstrong numbmer");
//     else
//         printf("not a armstrong number");
//     return 0;
// }
#include <stdio.h>
int main()
{
    int number, sum = 0, temp, rem;
    printf("enter any number: ");
    scanf("%d", &number);
    temp = number;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + rem * rem * rem;
        temp = temp / 10;
    }
    if (sum == number)
        printf("armstrong number");
    else
        printf("not a armstrong number");
    return 0;
}