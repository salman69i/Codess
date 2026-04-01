/*#include<stdio.h>
int main()
{
    int x = 10;
    int y = x++;
    printf("x = %d\n",x);
    printf("y = %d",y);

}*/
/*#include<stdio.h>
int main()
{
    int x = 10;
    int y = x--;
    printf("x = %d\n",x);
    printf("y = %d",y);

}*/
#include<stdio.h>
int main()
{
    int x = 10;

    printf("%d\n",x++); //10
    printf("%d\n",x);  //11
    printf("%d\n",++x); //12
    printf("%d\n",x);  //12
    printf("%d\n",x--); //12
    printf("%d\n",--x);  //10

}
