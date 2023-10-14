#include <stdio.h>

int main(){
    int a, b, sum, multiply, substract;

    printf("Enter first integer number: ");
    scanf("%d", &a);

    printf("Enter second integer number: ");
    scanf("%d", &b);

    sum = a + b;
    printf("Sum = %d\n", sum);

    multiply = a * b;
    printf("Product = %d\n", multiply);

    substract = a - b;
    printf("Difference = %d", substract);

    return 0;
}
