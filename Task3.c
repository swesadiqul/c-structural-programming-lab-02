#include <stdio.h>


int main(){
    int x, y;

    printf("Enter first integer number: ");
    scanf("%d", &x);

    printf("Enter second integer number: ");
    scanf("%d", &y);

    if(x > y){
        printf("First is greater");
    }else if(y > x){
        printf("Second is greater");
    }else{
        printf("The numbers are equal");
    }

    return 0;
}
