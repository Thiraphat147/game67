#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    int number = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    printf("Guess the number between 1 and 100: ");
    scanf("%d", &guess);

    do
    {
        attempts++;
        if (guess < number)
        {
            printf("Too low! Try again: ");
            scanf("%d", &guess);
        }
        else if (guess > number)
        {
            printf("Too high! Try again: ");
            scanf("%d", &guess);
        }
    } while (guess != number);
    printf("Congratulations! You guessed the number %d in %d attempts.\n", number, attempts);

    return 0;
}