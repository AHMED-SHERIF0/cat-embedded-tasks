#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    int id, attempts = 0;
    char password[20];
    const char correctPassword[] = "password123";

    printf("Enter your ID: ");
    scanf("%d", &id);

    if (id == 1234) {
        do {
            printf("Enter your password: ");
            scanf("%s", password);

            if (strcmp(password, correctPassword) == 0) {
                printf("Welcome!\n");
                return 0;
            } else {
                printf("You are not registered.\n");
                attempts++;
            }
        } while (attempts < 3);

        printf("No more tries.\n");
    } else {
        printf("Wrong ID.\n");
    }

    return 0;
}
