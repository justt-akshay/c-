#include <stdio.h>

int main() {
    int choice;
    double years, days;

    printf("Choose an option:\n");
    printf("1. Convert years to days\n");
    printf("2. Convert days to years\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            // Convert years to days
            printf("Enter the number of years: ");
            scanf("%lf", &years);
            days = years * 365.0; // Assuming 1 year = 365 days
            printf("%.2lf years is equal to %.2lf days.\n", years, days);
            break;

        case 2:
            // Convert days to years
            printf("Enter the number of days: ");
            scanf("%lf", &days);
            years = days / 365.0; // Assuming 1 year = 365 days
            printf("%.2lf days is equal to %.2lf years.\n", days, years);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
