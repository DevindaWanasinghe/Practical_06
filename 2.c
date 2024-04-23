#include <stdio.h>

void OddEven(int num) {
    if (num % 2 == 0) {
        printf("Even Number\n");
    } else {
        printf("Odd Number\n");
    }
}

int main() {
    int userInput;

    printf("Enter your number: ");

    if (scanf("%d", &userInput)== 1) {
        OddEven(userInput);
    } else {
        printf("Invalid input!\n");
    }

    return 0;
}

