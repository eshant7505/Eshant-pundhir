//C program for string concadination.


#include <stdio.h>
#include <string.h>

void concatenateStrings(char *result, const char *str1, const char *str2) {
    // Copy the first string to the result buffer
    strcpy(result, str1);

    // Concatenate the second string to the result buffer
    strcat(result, str2);
}

int main() {
    // Define two strings
    char string1[100], string2[100];

    // Input the first string
    printf("Enter the first string: ");
    scanf("%s", string1);

    // Input the second string
    printf("Enter the second string: ");
    scanf("%s", string2);

    // Concatenate the strings
    char result[200]; // Assuming the result can hold the concatenated strings
    concatenateStrings(result, string1, string2);

    // Display the result
    printf("Concatenated string: %s\n", result);

    return 0;
}
/*This program defines a function concatenateStrings that takes three parameters:
A result buffer and two input strings.
It uses the strcpy function to copy the first string into the result buffer.
strcat function to concatenate the second string to the result buffer.
The main function takes user input for two strings,
calls the concatenateStrings function, and then prints the concatenated result.*/