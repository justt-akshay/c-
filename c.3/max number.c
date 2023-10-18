#include <stdio.h>

// Function to find the maximum number in an array
int findMax(int arr[], int size) {
    int max = arr[0];  // Assume the first element is the maximum

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  // Update max if a larger element is found
        }
    }

    return max;
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    if (size <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;  // Exit with an error code
    }

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr, size);

    printf("The maximum number in the array is: %d\n", max);

    return 0;
}
