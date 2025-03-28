#include <stdio.h>
#include <stdio.h>

void scalarMultiplication(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] * arr2[i];
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    int result[size];

    scalarMultiplication(arr1, arr2, result, size);

    printf("Scalar multiplication result: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
