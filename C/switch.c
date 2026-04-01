#include <stdio.h>
int main()
{
    // switch(expression)  case 1.....n
    int a = 2;
    switch (a)
    {
    case 1:
    {
        printf("Bnagladesh");
        break;
    }
    case 2:
    {
        printf("USA");
        break;
    }
    case 3:
    {
        printf("UK");
        break;
    }
    default:
        printf("India");
    }
    return 0;
}
