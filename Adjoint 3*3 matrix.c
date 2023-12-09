//Adjoint of 3*3 matrix.

#include <stdio.h>

// Function to calculate the determinant of a 2x2 matrix
int determinant2x2(int a, int b, int c, int d) {
    return (a * d - b * c);
}

// Function to calculate the cofactor of a matrix
void cofactor(int matrix[3][3], int cofactorMatrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int sign = ((i + j) % 2 == 0) ? 1 : -1;
            int minorMatrix[2][2];
            int minorIndex = 0;

            // Create the minor matrix for element matrix[i][j]
            for (int row = 0; row < 3; row++) {
                for (int col = 0; col < 3; col++) {
                    if (row != i && col != j) {
                        minorMatrix[minorIndex / 2][minorIndex % 2] = matrix[row][col];
                        minorIndex++;
                    }
                }
            }

            // Calculate the cofactor
            cofactorMatrix[i][j] = sign * determinant2x2(minorMatrix[0][0], minorMatrix[0][1], minorMatrix[1][0], minorMatrix[1][1]);
        }
    }
}

int main() {
    // Define a 3x3 matrix
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Initialize a matrix to store the cofactor
    int cofactorMatrix[3][3];

    // Calculate the cofactor
    cofactor(matrix, cofactorMatrix);

    // Transpose the cofactor matrix to get the adjoint
    printf("Adjoint Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", cofactorMatrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
