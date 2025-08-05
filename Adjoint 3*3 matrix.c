//Adjoint of 3*3 matrix.

#include <stdio.h>

int determinant2x2(int a, int b, int c, int d) {
    return (a * d - b * c);
}

void cofactor(int matrix[3][3], int cofactorMatrix[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int sign = ((i + j) % 2 == 0) ? 1 : -1;
            int minorMatrix[2][2];
            int minorIndex = 0;

            for (int row = 0; row < 3; row++) {
                for (int col = 0; col < 3; col++) {
                    if (row != i && col != j) {
                        minorMatrix[minorIndex / 2][minorIndex % 2] = matrix[row][col];
                        minorIndex++;
                    }
                }
            }

            cofactorMatrix[i][j] = sign * determinant2x2(minorMatrix[0][0], minorMatrix[0][1], minorMatrix[1][0], minorMatrix[1][1]);
        }
    }
}

int main() {

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int cofactorMatrix[3][3];

    cofactor(matrix, cofactorMatrix);

    printf("Adjoint Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", cofactorMatrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}
