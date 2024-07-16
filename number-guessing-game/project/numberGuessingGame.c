#include "stdio.h"
#include "time.h"
#include "stdlib.h"

void NumberGuessingGame() {
    srand(time(NULL));
    int max;
    max = 100;
    int guess;
    int r = rand() % max + 1;
    printf("%d\n", r);
    do {
        scanf("%d", &guess);
        if (guess == r) {
            printf("Correct answer !");
        } else {
            printf("Wrong answer !\n");
        }
    } while (guess != r);
}