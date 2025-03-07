#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int id;
    printf("Enter your ID: ");
    scanf("%d", &id);

    switch (id) {
        case 1234:
            printf("ahmed\n");
            break;
        case 5678:
            printf("mohsen\n");
            break;
        case 1145:
            printf("messi\n");
            break;
        default:
            printf("Wrong ID\n");
    }
    return 0;
}
