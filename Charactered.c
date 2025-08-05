//C program for string manipulation using charactered.


#include <stdio.h>
#include <string.h>

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void stringConcatenate(char *destination, const char *source) {
    int destLength = stringLength(destination);
    int i;

    for (i = 0; source[i] != '\0'; i++) {
        destination[destLength + i] = source[i];
    }

    destination[destLength + i] = '\0';
}

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

    char str1[50] = "Hello";
    char str2[] = " World";

    printf("Length of str1: %d\n", stringLength(str1));

    stringConcatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);

    stringReverse(str1);
    printf("Reversed string: %s\n", str1);

    return 0;
}
/*StringLength: Calculates the length of a string.
stringConcatenate: Concatenates two strings.
stringReverse: Reverses a string*/
