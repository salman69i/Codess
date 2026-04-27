#include <stdio.h>
int main()
{
    int b;
    int a = b = 10;
    int c = ++a;
    b++;
    int d = b;
    int e = b++;
    printf("%d\n%d", ++d, c++);
}