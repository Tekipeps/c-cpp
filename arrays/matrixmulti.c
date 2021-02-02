#include <stdio.h>
#include <errno.h>
#include <math.h>

void printMatrix(int** matrix, int l1, int l2) {
    for (int i = 0; i < l1; i++) {
        for (int j = 0; j < l2; j++) {
            printf("%d", matrix[l1][l2]);
        }
        printf("\n");
    }
}

int main() {
    int r1, c1;
    printf("Enter the row and column of the first matrix `r c`: ");
    scanf("%d %d", &r1, &c1);

    int r2, c2;
    printf("Enter the row and column of the second matrix `r c`: ");
    scanf("%d %d", &r2, &c2);

    assert(r1 == c2);
    // create the matrixes and get the values
    int m1[r1][c1]; int m2[r2][c2];
    for (int i = 0; i < r1; i++) {
        printf("Row %d", i);
        for (int j = 0; j < c1; j++) {
            printf("Column %d", j);
            scanf("%d", &m1[i][j]);
        }
    }

    for (int i = 0; i < r2; i++) {
        printf("Row %d", i);
        for (int j = 0; j < c2; j++) {
            printf("Column %d", j);
            scanf("%d", &m2[i][j]);
        }
    }

    printMatrix(m1, r1, c1);

    // perform multiplication


    return 0;
}