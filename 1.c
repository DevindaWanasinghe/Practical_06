#include <stdio.h>

void TryAgain() {
    printf("Try again!\n");
}

int main() {
    float userInput;

    printf("Enter your number: ");

    if (scanf("%f", &userInput) == 1) {
        TryAgain();
    } else {
        printf("Invalid input\n");
    }

    return 0;
}
