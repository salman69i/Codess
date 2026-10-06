#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int target, guess, attempts = 0;
    srand(time(0));
    target = (rand() % 20) + 1;
    while (1)
    {
        printf("enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess < target)
        {
            printf("too low! try again\n");
        }
        else if (guess > target)
        {
            printf("too high! try again\n");
        }
        else
        {
            printf("congratulations! you have guessed the correct number %d in %d attempts !", target, attempts);
            break;
        }
    }
    return 0;
}