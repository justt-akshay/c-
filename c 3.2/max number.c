#include <stdio.h>

int main() {
    int num, maxDigit = -1, digit;

    printf("Enter an integer: ");
    scanf("%d", &num);

    num = (num < 0) ? -num : num;  // Convert negative number to positive

    while (num > 0) {
        digit = num % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        num /= 10;
    }

    if (maxDigit != -1) {
        printf("Maximum digit is: %d\n", maxDigit);
    } else {
        printf("No digits found in the input number.\n");
    }

    return 0;
}
