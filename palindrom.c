#include <stdio.h>


int main() {
    char str[50];
    int start, end;
    int length = 0;
    int is_palindrome = 1; // Assume the string is a palindrome initially

    // Input the string from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    while (str[length] != '\0') {
        length++;
    }
    if (str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--; // Adjust length to exclude newline character
    }

    // Initialize start and end indices
    start = 0;
    end = length - 1;

    // Check for palindrome
    while (start < end) {
        if (str[start] != str[end]) {
            is_palindrome = 0; // Not a palindrome
            break;
        }
        start++;
        end--;
    }

    // Output result
    if (is_palindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
