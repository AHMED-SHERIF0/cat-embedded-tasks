#include <stdio.h>
#include <stdio.h>

int findSecondLargest(int arr[], int n) {
    int largest = -1, secondLargest = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
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

    int secondLargest = findSecondLargest(arr, n);
    printf("The second largest element is: %d\n", secondLargest);

    return 0;
}
