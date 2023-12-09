 //Append file data with file checksum.


 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to calculate checksum
unsigned int calculateChecksum(const char *data) {
    unsigned int checksum = 0;
    while (*data) {
        checksum += *data++;
    }
    return checksum;
}

int main() {
    FILE *file;
    char filename[] = "example.txt";
    char data[] = "Hello, World!";
    
    // Open the file in append mode
    file = fopen(filename, "a");
    
    if (file == NULL) {
        fprintf(stderr, "Error opening file '%s'\n", filename);
        return 1;
    }

    // Write data to the file
    fprintf(file, "%s", data);

    // Calculate and append checksum to the file
    unsigned int checksum = calculateChecksum(data);
    fprintf(file, "\nChecksum: %u\n", checksum);

    // Close the file
    fclose(file);

    printf("Data written to file '%s' with checksum.\n", filename);

    return 0;
}
