#include <stdio.h>

int main() {
    int numCanvases, numPaintTubes;
    int canvasPrice = 120;
    int paintPrice = 75;
    int totalAmount, discount;


    printf("Enter the number of canvases ordered: ");
    scanf("%d", &numCanvases);

    printf("Enter the number of paint tubes ordered: ");
    scanf("%d", &numPaintTubes);

    totalAmount = (numCanvases * canvasPrice) + (numPaintTubes * paintPrice);
    printf("Previous total: %d \n", totalAmount);

    if (totalAmount >= 1000) {
        discount = 150;
    } else if (totalAmount >= 750) {
        discount = 50;
    } else if (totalAmount >= 500) {
        discount = 20;
    } else if (totalAmount >= 300) {
        discount = 10;
    } else {
        discount = 0;
    }

    totalAmount -= discount;

    printf("New total after discount: %d \n", totalAmount);

    return 0;
}

