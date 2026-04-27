#include<stdio.h>
int main()
{
   int y,z;
    int x=y=z=10;
    int f=x;
    float output =0.0;
    f*= x*y;
    output=x/3.0+y/3.0;
    printf("%d %f", f, output);
    return 0;

}