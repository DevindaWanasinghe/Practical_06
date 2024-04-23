#include <stdio.h>

int addNum(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int num1, num2;
    printf("Enter the first number: ");

    if (scanf("%d", &num1) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("Enter the second number: ");

    if (scanf("%d", &num2) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    int result = addNum(num1, num2);

    printf("Sum: %d\n", result);

    return 0;
}

