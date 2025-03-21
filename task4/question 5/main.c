#include <stdio.h>
#include <stdio.h>

int main() {
    int matrix[5][5];
    int sumRow[5] = {0}, sumCol[5] = {0};

    printf("Please enter 25 numbers for the matrix:\n");

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            sumRow[i] += matrix[i][j];
            sumCol[j] += matrix[i][j];
        }
    }

    printf("Row Totals: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", sumRow[i]);
    }
    printf("\n");

    printf("Column Totals: ");
    for (int j = 0; j < 5; j++) {
        printf("%d ", sumCol[j]);
    }
    printf("\n");

    return 0;
}
