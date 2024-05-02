#include <stdio.h>

int isDivisibleBy3And5(int number) {
    if (number % 3 == 0 && number % 5 == 0) {
        return 1; // The number is divisible by both 3 and 5
    } else {
        return 0; // The number is not divisible by both 3 and 5
    }
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    if (isDivisibleBy3And5(number)) {
        printf("%d is divisible by both 3 and 5.\n", number);
    } else {
        printf("%d is not divisible by both 3 and 5.\n", number);
    }

    return 0;
}