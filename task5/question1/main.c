#include <stdio.h>
#include <stdio.h>

int main() {
    int num = 10;
    printf("Initial value: %d\n", num);

    int *ptr = &num;
    *ptr = 20;
    printf("Modified value: %d\n", num);

    return 0;
}
