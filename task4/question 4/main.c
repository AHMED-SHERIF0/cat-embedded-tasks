#include <stdio.h>
#include <stdio.h>

int findRepeatingElement(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                return arr[i];
            }
        }
    }
    return -1;
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

    int repeating = findRepeatingElement(arr, n);
    if (repeating != -1) {
        printf("A repeating element is: %d\n", repeating);
    } else {
        printf("No repeating elements found.\n");
    }
    return 0;
}
