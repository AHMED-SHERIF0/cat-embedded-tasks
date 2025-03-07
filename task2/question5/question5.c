#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3, max;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = num1;
    if (num2 > max) {
        max = num2;
    }
    if (num3 > max) {
        max = num3;
    }

    printf("Maximum number is: %d\n", max);
    return 0;
}
