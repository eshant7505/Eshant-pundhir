//C program for string comparition.


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];

    // Input first string
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    // Input second string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from the input
    strtok(str1, "\n");
    strtok(str2, "\n");

    // Compare the strings using strcmp
    int result = strcmp(str1, str2);

    // Check the result of comparison
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller than the second string.\n");
    } else {
        printf("The first string is lexicographically greater than the second string.\n");
    }

    return 0;
}
/*This program prompts the user to enter two strings, 
Removes newline characters from the input, and then compares them using strcmp.
The result of the comparison is used to determine the relationship between the two strings.*/
