#include <stdio.h>
#include <stdio.h>

void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int x, y, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    add(&x, &y, &sum);
    printf("The sum is: %d\n", sum);

    return 0;
}
