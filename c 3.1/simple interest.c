#include <stdio.h>

int main() {
    double principal, rate, time, simpleInterest;

    // Input principal amount
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    // Input rate of interest
    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);

    // Input time period in years
    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;

    // Display the calculated simple interest
    printf("Simple Interest: %.2lf\n", simpleInterest);

    return 0;
}
