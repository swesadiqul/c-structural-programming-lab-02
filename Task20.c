#include <stdio.h>

int main() {
    int number;

    // Input an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if it's not a multiple of 2 and not a multiple of 5
    if (number % 2 != 0 && number % 5 != 0) {
        printf("%d\n", number);
    } else {
        printf("No\n");
    }

    return 0;
}
