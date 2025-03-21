#include <stdio.h>
#include <stdio.h>

void printUniqueElements(int arr[], int n) {
    printf("Unique elements:\n");
    for (int i = 0; i < n; i++) {
        int isUnique = 1;
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0;
                break;
            }
        }
        if (isUnique) {
            printf("%d ", arr[i]);
        }
    }
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printUniqueElements(arr, n);
    return 0;
}
