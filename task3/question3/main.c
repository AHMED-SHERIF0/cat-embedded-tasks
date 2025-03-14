#include <stdio.h>
#include <stdio.h>

int Count_Digits(int num) {
    int count = 0;
    while (num != 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    printf("The number of digits is: %d\n", Count_Digits(number));

    return 0;
}
