#include <stdio.h>

void checkEvenOdd() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("Even\n");
    } else {
        printf("Odd\n");
    }
}

