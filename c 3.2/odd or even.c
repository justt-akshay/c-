#include <stdio.h>

int main() {
    int number;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Use the ternary operator to check if the number is even or odd
    (number % 2 == 0) ? printf("%d is even.\n", number) : printf("%d is odd.\n");

    return 0;
}
