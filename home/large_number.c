#include <stdio.h>
int main()
{

    double nm1, nm2, nm3;
    printf("Enter three numbers : ");
    scnaf("%lf %lf %lf", &nm1, &nm2, &nm3);
    if (nm1 >= nm2)
    {
        if (nm1 >= nm3)
        {
            printf(".2f is the largest number", nm1);
        }
        else
        {
            printf(".2f is the largest number", nm3);
        }
    }
    else
    {
        if (nm2 >= nm3)
        {
            printf(".2f is the largest number", nm2);
        }
        else
        {
            printf(".2f is the largest number", nm3);
        }
    }
    return 0;
}