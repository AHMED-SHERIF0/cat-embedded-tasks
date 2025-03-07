#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
//question1
int main() {
    float hours, salary;
    printf("Enter working hours: ");
    scanf("%f", &hours);

    salary = hours * 50;
    if (hours < 40) {
        salary -= salary * 0.1;
    }

    printf("Salary: %.2f\n", salary);
    checkEvenOdd();
    return 0;
}

