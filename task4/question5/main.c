#include <stdio.h>
#include <stdio.h>

int Fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return Fibonacci(n - 1) + Fibonacci(n - 2);
}

int main() {
    int number, i;

    printf("Enter the number of terms: ");
    scanf("%d", &number);

    printf("Fibonacci Series: ");
    for (i = 0; i < number; i++) {
        printf("%d ", Fibonacci(i));
    }
    printf("\n");

    return 0;
}
