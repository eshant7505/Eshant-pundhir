//The inverse of a 3x3 matrix.

#include <stdio.h>

// Function to calculate the determinant of a 3x3 matrix
int determinant3x3(int matrix[3][3]) {
    return matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1]) -
           matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0]) +
           matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
}

// Function to calculate the inverse of a 3x3 matrix
void inverse(int matrix[3][3], float inverseMatrix[3][3]) {
    int det = determinant3x3(matrix);

    if (det == 0) {
        printf("Inverse does not exist (matrix is singular)\n");
        return;
    }

    // Calculate the adjoint matrix
    int cofactorMatrix[3][3];
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
            cofactorMatrix[i][j] = sign * determinant3x3(minorMatrix);
        }
    }

    // Calculate the inverse matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            inverseMatrix[i][j] = (float)cofactorMatrix[j][i] / det;
        }
    }
}

int main() {
    // Define a 3x3 matrix
    int matrix[3][3] = {
        {2, 3, -1},
        {4, 2, 0},
        {1, -1, 2}
    };

    // Initialize a matrix to store the inverse
    float inverseMatrix[3][3];

    // Calculate the inverse
    inverse(matrix, inverseMatrix);

    // Print the inverse matrix
    printf("Inverse Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f\t", inverseMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*In this program, the determinant3x3 function calculates the determinant of a 3x3 matrix,
And the inverse function calculates the inverse of a 3x3 matrix using the adjoint matrix.
 The result is then printed. Note that the program checks for singularity (when the determinant is zero), 
 As the inverse does not exist for a singular matrix.*/