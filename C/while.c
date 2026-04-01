#include <stdio.h>
int main()
{
    int i = 5;

    while (i >= (-5))
    {
        if (i != 0)
        {
            printf("%d\n", i);
        }
        i--;
    }

    return 0;
}