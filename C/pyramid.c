#include <stdio.h>

int main() {
  /*  int n, i, j, k;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {

        // Print spaces
        for(j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for(k = 1; k <= 2*i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;*/


    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        for(int s = 1; s <= n - i; s++) printf(" ");
        for(int star = 1; star <= 2*i - 1; star++) printf("*");
        printf("\n");
    }

    return 0;
}





