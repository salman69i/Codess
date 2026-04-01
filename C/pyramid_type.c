/*#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for(int k = 1; k <= n; k++)
    {   //space
        for (int i = k ; i <= n ; i++)
        {
            printf(" ");
        }
        //star
        for(int i=1; i<=k; i++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}*/
/*#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int k = n; k >= 1; k--)
    {
        for (int i = 1; i <= n - k; i++)
        {
            printf(" ");
        }

        for(int i = 1; i <= k; i++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}*/

#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    for(int k = 1; k <= n; k++)
    {   //space
        for (int i = 1 ; i < k ; i++)
        {
            printf(" ");
        }
        //star
        for(int i=k; i<=n; i++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}




