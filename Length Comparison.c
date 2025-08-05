//C program for string length comparision.


#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];


    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    str1[strcspn(str1, "\n")] = '\0';


    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    

    str2[strcspn(str2, "\n")] = '\0';


    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 == len2) {
        printf("Both strings have the same length: %d\n", len1);
    } else {
        printf("Strings have different lengths:\n");
        printf("Length of the first string: %d\n", len1);
        printf("Length of the second string: %d\n", len2);
    }

    return 0;
}
/*This program prompts the user to enter two strings,
removes the newline character from the input,
calculates the lengths of the strings using the strlen function, and then compares the lengths.
It then prints a message indicating whether the strings have the same length or different lengths*/
