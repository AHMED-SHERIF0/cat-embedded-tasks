#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int number;
    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }
    return 0;
}

