#include <stdio.h>


int main() {
    int hour;

    printf("Enter the hour of integer number: ");
    scanf("%d", &hour);

    if(hour >= 0 && hour <= 23){
        if(hour >= 4 && hour <=6){

            printf("4 to 6: Breakfast");

        }else if(hour >= 12 && hour <=13){

            printf("12 to 13: Lunch");

        }else if(hour >= 16 && hour <=17){

            printf("16 to 17: Snacks");

        }else if(hour >= 19 && hour <=20){

            printf("19 to 20: Dinner");

        }else{

            printf("Patience is a virtue");
        }
    }else{

        printf("Wrong time");
    }
    return 0;
}
