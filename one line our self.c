#include <stdio.h>

int main() {
    
    FILE *file;

    
    file = fopen(" I am student of dehli university", "w");

    
    if (file == NULL) {
        printf("Error opening the file.\n");
        return 1; 
    }

    
    fprintf(file, "Hello, this is our self-created file!\n");

    
    fclose(file);

    printf("File created and written successfully.\n");

    return 0; 
}
