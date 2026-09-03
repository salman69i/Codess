#include <stdio.h>
int main()
{

    int lpyear ;
    printf("enter a year: ");
    scanf("%d", &lpyear);
    if (lpyear % 400 == 0)
        printf("leap year");
    else if (lpyear % 100 != 0 && lpyear % 4 == 0)
        printf("leap year");
    else
        printf("not a leap year");
    return 0;
}