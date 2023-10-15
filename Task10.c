#include <stdio.h>

int main() {
    int h, salary;

    printf("Enter the number of hours: ");
    scanf("%d", &h);

    if(h < 0){
        printf("Hour cannot be negative");
    }else if(h <= 40){
        salary = h * 200;
        printf("%d", salary);
    }else if(h > 40 && h < 168){
        salary = 8000 + (h - 40) * 300;
        printf("%d", salary);
    }else{
        printf("Impossible to work more than 168 hours weekly");
    }
    return 0;
}

