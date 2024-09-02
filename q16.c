// Q.16 A = ⌊3 4 2 4 ⌋ B =⌊ 1 2 3 4 ⌋
// Write a C program to perform Matrix addition for the above two
// matrices.
#include <stdio.h>

int main() {
    int A[2][2] = {{3, 4}, {2, 4}};
    int B[2][2] = {{1, 2}, {3, 4}};
    int C[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Resultant Matrix after addition:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}