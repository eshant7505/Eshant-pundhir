//C program for string manipilation with using string Library.


#include <stdio.h>
#include <string.h>

int main() {

    char str1[100], str2[100];


    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);


    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';


    printf("\nConcatenated String: %s\n", strcat(str1, str2));

   
    printf("Length of the first string: %lu\n", strlen(str1));
    printf("Length of the second string: %lu\n", strlen(str2));


    int result = strcmp(str1, str2);
    if (result == 0) {
        printf("The strings are equal.\n");
    } else if (result < 0) {
        printf("The first string is lexicographically smaller than the second string.\n");
    } else {
        printf("The first string is lexicographically larger than the second string.\n");
    }

    char copiedStr1[100], copiedStr2[100];
    strcpy(copiedStr1, str1);
    strcpy(copiedStr2, str2);
    printf("\nCopied String 1: %s\n", copiedStr1);
    printf("Copied String 2: %s\n", copiedStr2);

  
    char* token1 = strtok(str1, " ");
    char* token2 = strtok(str2, " ");
    printf("\nTokenized String 1:\n");
    while (token1 != NULL) {
        printf("%s\n", token1);
        token1 = strtok(NULL, " ");
    }
    printf("\nTokenized String 2:\n");
    while (token2 != NULL) {
        printf("%s\n", token2);
        token2 = strtok(NULL, " ");
    }

    return 0;
}
