// #include <stdio.h>
// int main()
// {
//     while (1)
//     {
//         int number, count = 0;
//         printf("enter any number: ");
//         scanf("%d", &number);
//         if (number <= 1)
//         {
//             count++;
//         }
//         for (int i = 2; i < number; i++)
//         {
//             if (number % i == 0)
//             {
//                 count++;
//                 break;
//             }
//         }
//         if (count == 0)
//             printf("%d is a prime number\n", number);
//         else
//             printf("%d is not a prime number\n", number);
//     }
// }

// #include <stdio.h>
// int main()
// {
//     while (1)
//     {
//         int number, count = 0;
//         printf("enter any number: ");
//         scanf("%d", &number);
//         if (number <= 1)
//         {
//             count++;
//         }
//         for (int i = 2; i <= number / 2; i++)
//         {
//             if (number % i == 0)
//             {
//                 count++;
//                 break;
//             }
//         }
//         if (count == 0)
//             printf("%d is a prime number\n", number);
//         else
//             printf("%d is not a prime number\n", number);
//     }
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     while (1)
//     {
//         int number, count = 0;
//         printf("enter any number: ");
//         scanf("%d", &number);
//         if (number <= 1)
//         {
//             count++;
//         }
//         for (int i = 2; i <= sqrt(number); i++)
//         {
//             if (number % i == 0)
//             {
//                 count++;
//                 break;
//             }
//         }
//         if (count == 0)
//             printf("%d is a prime number\n", number);
//         else
//             printf("%d is not a prime number\n", number);
//     }
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     while (1)
//     {
//         int number, count = 0;
//         printf("enter any number: ");
//         scanf("%d", &number);
//         if (number <= 1)
//         {
//             count++;
//         }
//         else
//         {
//             for (int i = 2; i <= sqrt(number); i++)
//             {
//                 if (number % i == 0)
//                 {
//                     count++;
//                     break;
//                 }
//             }
//         }
//         if (count == 0)
//             printf("%d is a prime number\n", number);
//         else
//             printf("%d is not a prime number\n", number);
//     }
// }

#include <stdio.h>
int main()
{
    while (1)
    {
        int i, num, count = 0;
        printf("enter any number: ");
        scanf("%d", &num);
        if (num <= 1)
            count++;
        else
        {
            for (i = 2; i < num; i++)
            {
                if (num % i == 0)
                {
                    count++;
                    break;
                }
            }
        }
        if (count == 0)
            printf("%d is a prime number\n", num);
        else
            printf("%d is not a prime number\n", num);
    }
}