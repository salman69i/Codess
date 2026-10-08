// #include <stdio.h>
// #include <stdbool.h>

// // Function that returns true if num is divisible by 3 or 7, else false
// bool checkDivisibility(int n)
// {
//     if (n % 3 == 0 || n % 7 == 0)
//     {
//         return true;
//     }
//     return false;
// }

// int main()
// {
//     int num;

//     printf("Enter a positive integer: ");
//     scanf("%d", &num);

//     if (num <= 0)
//     {
//         printf("Please enter a positive integer.\n");
//         return 1;
//     }

//     if (checkDivisibility(num))
//     {
//         printf("1 (True)\n");
//     }
//     else
//     {
//         printf("0 (False)\n");
//     }

//     return 0;
// }
#include<stdio.h>

int main()
{
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    if (num % 3 == 0 || num % 7 == 0)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}