#include <stdio.h>
int add(int num1, int num2) {
    return num1 + num2;
}
int subtract(int num1, int num2) {
    return num1 - num2;
}
int multiply(int num1, int num2) {
    return num1 * num2;
}
float divide(int num1, int num2) {
    if (num2 != 0) {
        return (float)num1 / num2;
    } else {
        printf("Division by zero.\n");
        return 0.0;
    }}
int main() {
    int value1, value2;
    printf("Enter the first value: ");
    if (scanf("%d", &value1) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("Enter the second value: ");
    if (scanf("%d", &value2) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    int sum = add(value1, value2);
    int difference = subtract(value1, value2);
    int product = multiply(value1, value2);
    float quotient = divide(value1, value2);

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    return 0;
}
