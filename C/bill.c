#include <stdio.h>

int main()
{
    float n, dc = 0, bill = 0;

    printf("Enter units: ");
    scanf("%f", &n);

    if (n > 0 && n <= 100)
    {
        bill = n * 5;
    }
    else if (n > 100 && n <= 300)
    {
        bill = (100 * 5) + ((n - 100) * 7);
    }
    else if (n > 300 && n <= 500)
    {
        // Fixed the bracket math: n - 300 (not 500)
        bill = (100 * 5) + (200 * 7) + (n - 300) * 9;
    }
    else if (n > 500) // Added this block to handle values over 500
    {
        bill = (100 * 5) + (200 * 7) + (200 * 9) + (n - 500) * 12;
    }

    // Moved the discount check OUTSIDE the if-else brackets
    // so it applies to any high bill regardless of units
    if (bill > 10000)
    {
        dc = bill * (5.0 / 100.0);
        bill = bill - dc;
    }

    // Add fixed charge only if there is a bill
    if (n > 0) {
        bill += 150;
        printf("Total bill is: %.2f\n", bill);
    } else {
        printf("Invalid input or no usage.\n");
    }

    return 0;
}
