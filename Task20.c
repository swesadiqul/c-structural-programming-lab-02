#include <stdio.h>

int main() {
    int number;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if it's not a multiple of 2 and not a multiple of 5
    if (number % 2 != 0 && number % 5 != 0) {
        printf("The integer is not a multiple of either 2 or 5: %d\n", number);
    } else {
        printf("The integer is a multiple of 2 or 5.\n");
    }

    return 0;
}
