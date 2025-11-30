#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts;

    srand(time(0));

    number = rand() % 100 + 1;

    printf("===> NUMBER GUESSING GAME <===\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Try to guess it!\n\n");

    // Maximum 100 attempts
    for(attempts = 1; attempts <= 100; attempts++) {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        if (guess > number) {
            printf("Too high! Try again.\n");
        } else if (guess < number) {
            printf("Too low! Try again.\n\n");
        } else {
            printf(" Correct! You guessed the number in %d attempts.\n\n", attempts);
            break; 
        }
    }

    if (guess != number) {
        printf(" Sorry! You did not guess the number. It was %d.\n", number);
    }

    return 0;
}
