#include <stdio.h>


int main(){
    int x, y, subtracts;

    printf("Enter first integer number: ");
    scanf("%d", &x);

    printf("Enter second integer number: ");
    scanf("%d", &y);

    if(x > y){
        subtracts = x - y;
        printf("%d", subtracts);
    }else if(y > x){
        subtracts = y - x;
        printf("%d", subtracts);
    }else{
        subtracts = y - x;
        printf("%d", subtracts);
    }

    return 0;
}
