#include <stdio.h>
#include <string.h>

int main() {
    float temp_F, temp_C;
    char season[20];

    printf("Enter temperature in degrees Fahrenheit: ");
    scanf("%f", &temp_F);

    temp_C = (temp_F - 32) * 0.56;

    if (temp_C < 20)
        strcpy(season, "Winter");
    else if (temp_C <= 25)
        strcpy(season, "Autumn");
    else if (temp_C < 30)
        strcpy(season, "Spring");
    else
        strcpy(season, "Summer");

    printf("%.2f degrees C\n", temp_C);
    printf("%s\n", season);

    return 0;
}
