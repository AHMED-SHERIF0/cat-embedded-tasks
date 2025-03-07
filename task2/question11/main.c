#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

int main() {
    int height;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
