//Addition of 3*3 matrix.

#include <stdio.h>

int main() {
    // Define two 3x3 matrices
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrix2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    // Initialize a result matrix to store the addition
    int resultMatrix[3][3];

    // Perform matrix addition
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            resultMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Print the result matrix
    printf("Matrix Addition Result:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", resultMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
