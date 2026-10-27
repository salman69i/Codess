#include <stdio.h>
void demo()
{
    int my[] = {10, 20, 30, 40, 50};
    printf("%zu\n", sizeof(my));
    int length = sizeof(my) / sizeof(my[0]);
    printf("%d\n", length);
    for (int i = 0; i <= 4; i++)
    {
        printf("%d\n", my[i]);
    }
}
void average()
{
    float sum = 0, avg;
    int ages[] = {12, 14, 45, 87, 24, 56, 37, 11};
    int length = sizeof(ages) / sizeof(ages[0]);
    for (int i = 0; i < length; i++)
    {
        sum += ages[i];
    }
    avg = sum / length;
    printf("average is %.3f\n", avg);
}
void lowest()
{
    int ages[] = {10, 33, 45, 67, 34, 66, 33, 56};
    int length = sizeof(ages) / sizeof(ages[0]);
    int lowestAge = ages[0];
    for (int i = 0; i < length; i++)
    {
        if (lowestAge > ages[i])
            lowestAge = ages[i];
    }
    printf("lowest ages is %d\n", lowestAge);
}

void skipExit()
{
    int num[] = {12, -4, 33, 556, 97, 0, 87, 0};
    int length = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < length; i++)
    {
        if (num[i] < 0)
            continue;
        if (num[i] == 0)
            break;
        printf("%d\n", num[i]);
    }
}

int main()
{
    demo();
    average();
    lowest();
    skipExit();
}