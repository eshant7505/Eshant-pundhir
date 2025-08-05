//C program for string reversal.


#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int length = strlen(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }
}

int main() {
    int maxLength = 100;
    
    char inputString[maxLength];

    printf("Enter a string: ");
    fgets(inputString, maxLength, stdin);

    inputString[strcspn(inputString, "\n")] = '\0';

    reverseString(inputString);

    printf("Reversed string: %s\n", inputString);

    return 0;
}
/* This program defines a function reverseString that takes a character array (string) as input and reverses it in place. 
The main function takes user input, calls the reverseString function, and then prints the reversed string.
Note that fgets is used to get input to handle spaces in the input string. 
The newline character at the end of the input string is removed to ensure proper reversal. */
