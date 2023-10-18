#include <stdio.h>

int main() {
    int num, first = 0, second = 1, next;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &num);

    printf("Fibonacci Series up to %d terms: %d, %d, ", num, first, second);

    for (int i = 3; i <= num; i++) {
        next = first + second;
        printf("%d, ", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
