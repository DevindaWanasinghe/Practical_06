#include <stdio.h>
#include <stdbool.h>

bool primeNum(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}
void printPrimes(int start, int end) {
    printf("Prime numbers between %d and %d are:\n", start, end);

    for (int i = start; i <= end; ++i) {
        if (primeNum(i)) {
            printf("%d\n", i);
        }
    }
}
int main() {
    int Start, End;

    printf("Enter the starting point of the Number: ");
    if (scanf("%d", &Start) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    printf("Enter the ending point of the Number: ");
    if (scanf("%d", &End) != 1) {
        printf("Invalid input!\n");
        return 1;
    }
    if (Start > End) {
        printf("Invalid interval!\n");
        return 1;
    }
    printPrimes(Start, End);
    return 0;
}

