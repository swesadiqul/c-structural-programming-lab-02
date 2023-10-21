#include <stdio.h>


int main(){
    int d, t;
    float v;

    printf("Enter the distance here: ");
    scanf("%d", &d);

    printf("Enter the time here: ");
    scanf("%d", &t);


    d = d / 1000;
    t = t / 3600;

    v = d / t;

    if(v > 90){
        printf("%f" + v + "km/h\n");
        printf("Too fast. Only a few changes should suffice.");
    }else if(v >= 60 && v <= 90 ){
        printf("%.2f" + v + "km/h\n");
        printf("Velocity is okay. The car is ready!");
    }else{
        printf("%.2f"+  v + "km/h\n");
        printf("Too slow. Needs more changes.");
    }
    return 0;
}

