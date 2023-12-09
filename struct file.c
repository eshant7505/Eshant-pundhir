//struct data to file.


#include <stdio.h>

// Define a struct for a person
struct Person {
    char name[50];
    int age;
};

int main() {
    // Create a FILE pointer
    FILE *file;

    // Create an array of struct Person
    struct Person people[] = {
        {"Alice", 25},
        {"Bob", 30},
        {"Charlie", 22}
    };

    // Open the file for writing in binary mode
    file = fopen("people.dat", "wb");

    if (file == NULL) {
        perror("Error opening file");
        return 1; // Exit the program with an error code
    }

    // Write the array of struct Person to the file
    fwrite(people, sizeof(struct Person), sizeof(people) / sizeof(struct Person), file);

    // Close the file
    fclose(file);

    printf("Data written to file successfully.\n");

    return 0; 
}
