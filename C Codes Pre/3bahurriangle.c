#include<stdio.h>
int main()
{
    float a,b,c,S,area;
    printf("Enter 3 values =");
    scanf("%f %f %f",&a,&b,&c);
    S = (a+b+c)/2;
    area = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("Area = %f",area);
    getch();

}
