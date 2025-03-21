#include <stdio.h>
#include <stdio.h>

int x, y;

void Swap() {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    Swap();
    printf("After swapping: x = %d, y = %d\n", x, y);

    return 0;
}
