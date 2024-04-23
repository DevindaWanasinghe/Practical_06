#include <stdio.h>

int calculate(int num) {
    return num * num * num;
}

int main() {
    int userNum;
    printf("Enter your number: ");
    if (scanf("%d", &userNum) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    int result = calculate(userNum);

    printf("The cube of %d is: %d\n", userNum, result);

    return 0;
}

