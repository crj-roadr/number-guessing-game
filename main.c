#include <stdio.h>

int random_number_generator(int min, int max);

int main() {
    srand(time(NULL));
    int randomNumber = random_number_generator(1, 100);
    int tries = 0;
    int guess = 0;
    printf("*** NUMBER GUESSING GAME ***\n");
    
    while (guess != randomNumber)
    {
        printf("Guess a number between 1 – 100: ");
        scanf("%d", &guess);

        if (guess > randomNumber) {
            printf("TOO HIGH!\n");
        } else if (guess < randomNumber) {
            printf("TOO LOW!\n");
        }
        
        tries++;
    }
    
    printf("CORRECT!\n");
    printf("The answer is %d\n", randomNumber);
    printf("It took you %d tries\n", tries);

    return 0;
}

int random_number_generator(int min, int max) {
    return (rand() % (max - min + 1)) + min;
}