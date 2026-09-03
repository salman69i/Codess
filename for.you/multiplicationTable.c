// #include <stdio.h>
// int main()
// {
//     int i, num;
//     printf("Enter any number: ");
//     scanf("%d", &num);
//     for (i = 1; i <= 10; i++)
//     {
//         printf("%d x %d = %d\n", num, i, num * i);
//     }

//     return 0;
// }

#include <stdio.h>
int main()
{
    while (1)  // just in case if i want to take multiple input in single run
    {
        int i, num;
        printf("Enter any number: ");
        scanf("%d", &num);
        for (i = 1; i <= 10; i++)
        {
            printf("%d x %d = %d\n", num, i, num * i);
        }
    }

    return 0;
}