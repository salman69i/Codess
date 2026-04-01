#include <stdio.h>

int main() {
    int dept;
    float sscGPA, hscGPA;
    float income;
    float admissionScore;
    int eligible = 1;

    // Input
    printf("Enter Department (1-CSE, 2-EEE, 3-BBA): ");
    scanf("%d", &dept);

    printf("Enter SSC GPA: ");
    scanf("%f", &sscGPA);

    printf("Enter HSC GPA: ");
    scanf("%f", &hscGPA);

    printf("Enter Family Income: ");
    scanf("%f", &income);

    // Eligibility check
    if (sscGPA < 3.5 || hscGPA < 3.5) {
        eligible = 0;
    }

    if (!eligible) {
        printf("\nNot eligible for admission.\n");
        return 0;
    }

    // Admission score calculation
    admissionScore = (sscGPA * 40) + (hscGPA * 60);

    printf("\nAdmission Score: %.2f\n", admissionScore);

    // Department selection using switch
    switch(dept) {
        case 1: // CSE
            if (admissionScore >= 380)
                printf("Eligible for CSE\n");
            else
                printf("Not eligible for CSE\n");
            break;

        case 2: // EEE
            if (admissionScore >= 360)
                printf("Eligible for EEE\n");
            else
                printf("Not eligible for EEE\n");
            break;

        case 3: // BBA
            if (admissionScore >= 330)
                printf("Eligible for BBA\n");
            else
                printf("Not eligible for BBA\n");
            break;

        default:
            printf("Invalid department choice\n");
    }

    // Scholarship using if-else
    printf("\nScholarship Status: ");
    if (income < 20000) {
        printf("50%% scholarship\n");
    } else if (income >= 20000 && income <= 40000) {
        printf("25%% scholarship\n");
    } else {
        printf("No scholarship\n");
    }

    return 0;
}