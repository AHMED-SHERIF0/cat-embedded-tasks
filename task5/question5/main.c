#include <stdio.h>
#include <stdio.h>

int main() {
    int x = 1, y = 2, z = 3;
    int *px = &x, *py = &y, *pz = &z;

    printf("Before swapping pointers:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("px = %p, py = %p, pz = %p\n", (void*)px, (void*)py, (void*)pz);
    printf("*px = %d, *py = %d, *pz = %d\n", *px, *py, *pz);


    printf("Swapping pointers...\n");
    pz = px; px = py; py = pz;

    printf("After swapping pointers:\n");
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    printf("px = %p, py = %p, pz = %p\n", (void*)px, (void*)py, (void*)pz);
    printf("*px = %d, *py = %d, *pz = %d\n", *px, *py, *pz);

    return 0;
}
