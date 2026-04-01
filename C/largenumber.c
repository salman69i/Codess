#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three numbers : ");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("a is the large number\n");
        }
        else
        {
            printf("c is the large number\n");
        }
    }
    else
    {
        if (b > c)
        {

            printf("b is the large number\n");
        }

        else
        {
            printf("c is the large number\n");
        }
    }
}
