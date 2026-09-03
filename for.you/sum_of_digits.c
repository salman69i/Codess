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
//         sum = sum + rem;
//         temp = temp / 10;
//     }
//     printf("sum of digits: %d", sum);
// }
#include <stdio.h>
int main()
{
    while (1)
    {
        int sum = 0, rem, temp, number;
        printf("Enter any number: ");
        scanf("%d", &number);
        temp = number;
        while (temp != 0)
        {
            rem = temp % 10;
            sum = sum + rem;
            temp = temp / 10;
        }
        printf("sum of digit is: %d \n", sum);
    }
}