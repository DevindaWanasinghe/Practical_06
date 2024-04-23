#include <stdio.h>
#include <math.h>

double Sqrt(double num) {
    return sqrt(num);
}

int main() {
    double userNum;
    printf("Enter your number: ");
    if (scanf("%lf", &userNum) != 1) {
        printf("Invalid input!\n");
        return 1;
    }

    if (userNum < 0) {
        printf("Square root is undefined for negative numbers.\n");
        return 1;
    }

    double result = Sqrt(userNum);

    printf("The square root of %.2f is: %.4f\n", userNum, result);

    return 0;
}

