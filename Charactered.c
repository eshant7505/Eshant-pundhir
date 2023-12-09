//C program for string manipulation using charactered.


#include <stdio.h>
#include <string.h>

// Function to calculate the length of a string
int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to concatenate two strings
void stringConcatenate(char *destination, const char *source) {
    int destLength = stringLength(destination);
    int i;

    for (i = 0; source[i] != '\0'; i++) {
        destination[destLength + i] = source[i];
    }

    destination[destLength + i] = '\0';
}

// Function to reverse a string
void stringReverse(char *str) {
    int length = stringLength(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    // Example usage
    char str1[50] = "Hello";
    char str2[] = " World";

    // Calculate and print the length of str1
    printf("Length of str1: %d\n", stringLength(str1));

    // Concatenate str2 to str1 and print the result
    stringConcatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);

    // Reverse the concatenated string and print the result
    stringReverse(str1);
    printf("Reversed string: %s\n", str1);

    return 0;
}
/*StringLength: Calculates the length of a string.
stringConcatenate: Concatenates two strings.
stringReverse: Reverses a string*/