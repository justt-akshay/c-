#include <stdio.h>
#include <string.h>

// Function to reverse a string using recursion
void reverseString(char str[]) {
    if (strlen(str) == 0) {
        return;  // Base case: If the string is empty, do nothing
    } else {
        // Recursive call to reverse the substring without the first character
        reverseString(&str[1]);
        // Swap the first character with the last character
        char temp = str[0];
        str[0] = str[strlen(str) - 1];
        str[strlen(str) - 1] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    gets(str);  // Input a string (unsafe, but simple for demonstration)

    reverseString(str);

    printf("Reversed string: %s\n", str);

    return 0;
}
