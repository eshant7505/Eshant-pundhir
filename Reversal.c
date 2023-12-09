//C program for string reversal.


#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    // Swap characters from the beginning and end towards the center
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    // Maximum length of the input string
    int maxLength = 100;
    
    char inputString[maxLength];

    // Get input from the user
    printf("Enter a string: ");
    fgets(inputString, maxLength, stdin);

    // Remove the newline character from the input
    inputString[strcspn(inputString, "\n")] = '\0';

    // Call the function to reverse the string
    reverseString(inputString);

    // Display the reversed string
    printf("Reversed string: %s\n", inputString);

    return 0;
}
/* This program defines a function reverseString that takes a character array (string) as input and reverses it in place. 
The main function takes user input, calls the reverseString function, and then prints the reversed string.
Note that fgets is used to get input to handle spaces in the input string. 
The newline character at the end of the input string is removed to ensure proper reversal. */