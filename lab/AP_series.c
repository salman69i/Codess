#include <stdio.h>

int main()
{
    int first_term, common_difference, num_terms;
    int current_term;
    int sum_loop = 0;

    // Step 1: Get user input
    printf("Enter the first term (a): ");
    scanf("%d", &first_term);

    printf("Enter the common difference (d): ");
    scanf("%d", &common_difference);

    printf("Enter the number of terms (n): ");
    scanf("%d", &num_terms);

    // Input validation
    if (num_terms <= 0)
    {
        printf("The number of terms must be greater than 0.\n");
        return 1;
    }

    // Initialize the starting term
    current_term = first_term;

    // Step 2: Display sequence and calculate sum using a loop
    printf("\nArithmetic Progression Series:\n");
    for (int i = 1; i <= num_terms; i++)
    {
        printf("%d", current_term);

        // Add to running total
        sum_loop += current_term;

        // Print comma separator except for the last term
        if (i < num_terms)
        {
            printf(", ");
        }

        // Calculate next term in sequence
        current_term += common_difference;
    }
    printf("\n");

    // Step 3: Calculate sum directly using mathematical formula
    // S_n = (n / 2.0) * (2*a + (n - 1) * d)
    double sum_formula = (num_terms / 2.0) * (2 * first_term + (num_terms - 1) * common_difference);

    // Step 4: Display results
    printf("\n--- Results ---\n");
    printf("N-th Term (a_%d): %d\n", num_terms, first_term + (num_terms - 1) * common_difference);
    printf("Sum calculated via Loop: %d\n", sum_loop);
    printf("Sum calculated via Formula: %.0f\n", sum_formula);

    return 0;
}