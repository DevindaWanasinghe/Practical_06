#include <stdio.h>

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
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

    swap(&num1, &num2);

    printf("\nAfter swapping:\n");
    printf("\nFirst number: %d\n", num1);
    printf("Second number: %d\n", num2);

    return 0;
}
