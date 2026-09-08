#include <stdio.h>
int main()
{
    int i;
    float f;
    double d;
    char c;
    printf("%d\n%d\n%d\n%d", sizeof(i), sizeof(f), sizeof(d), sizeof(c));
}