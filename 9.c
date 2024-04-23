#include <stdio.h>
#include <math.h>

int octalToDecimal(int octal) {
    int decimal = 0, i = 0;
    while (octal != 0) {
        decimal += (octal % 10) * pow(8, i);
        ++i;
        octal /= 10;
    }return decimal;
    }
int decimalToOctal(int decimal) {
    int octal = 0, i = 1;
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }
    return octal;
}
int main() {
    int choice, number;
    printf("Choose conversion type:\n");
    printf("1. Octal to Decimal\n");
    printf("2. Decimal to Octal\n\n");
    printf("Enter your choice (1 or 2): ");
    if (scanf("%d", &choice) != 1 || (choice != 1 && choice != 2)) {
        printf("Invalid choice. Please enter 1 or 2.\n");
        return 1;
        }
    printf("\nEnter your number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input!\n");
        return 1;
        }
    switch (choice) {
        case 1:
            printf("\nDecimal equivalent: %d\n", octalToDecimal(number));
            break;
        case 2:
            printf("\nOctal equivalent: %d\n", decimalToOctal(number));
            break;
    }return 0;
}
