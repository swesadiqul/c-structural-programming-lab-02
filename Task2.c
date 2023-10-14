#include <stdio.h>
#include <math.h>

int main(){
    double r, circumference, area;

    printf("Enter the radius of a circle: ");
    scanf("%lf", &r);

    circumference = 2 * M_PI * r;
    printf("Circumference is = %lf\n", circumference);

    area = M_PI * pow(r, 2);
    printf("Area is = %lf\n", area);

    return 0;
}
