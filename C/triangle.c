/*#include <stdio.h>

int main()
{    int n;
    scanf("%d",&n);

        for (int k= 1; k <= n; k++)
        {
            for (int i =1; i<=k;i++)
            {
                printf("*  ");
            }
            printf("\n");
        }




    return 0;
}*/

#include <stdio.h>

int main()
{

       int n;
    scanf("%d",&n);

        for (int k= 1; k <= n; k++)
        {
            for (int i = k; i<=n ;i++)
            {
                printf("*  ");
            }
            printf("\n");
        }




    return 0;
}

