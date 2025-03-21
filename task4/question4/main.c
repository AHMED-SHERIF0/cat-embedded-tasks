#include <stdio.h>
#include <stdio.h>
#include <string.h>

int Login(char username[], char password[]) {
    char correct_username[] = "ahmed";
    char correct_password[] = "12345";

    if (strcmp(username, correct_username) == 0 && strcmp(password, correct_password) == 0) {
        return 1;
    }
    return 0; // Failure
}

int main() {
    char username[20], password[20];

    printf("Enter username: ");
    scanf("%s", username);
    printf("Enter password: ");
    scanf("%s", password);

    if (Login(username, password)) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Try again.\n");
    }

    return 0;
}
