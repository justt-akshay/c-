#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    printf("Enter an integer: ");
    scanf("%d", &num);

    lastDigit = num % 10;  // Get the last digit

    while (num >= 10) {
        num /= 10;
    }

    firstDigit = num;  // Get the first digit

    sum = firstDigit + lastDigit;

    printf("Calculating the sum of the first and last digit of %d:\n", num);
    printf("First Digit: %d\n", firstDigit);
    printf("Last Digit: %d\n", lastDigit);
    printf("Sum: %d\n", sum);

    return 0;
}
