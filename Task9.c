#include <stdio.h>

int main() {
    int m;

    printf("Enter the number of seconds: ");
    scanf("%d", &m);

    int hours = m / 3600;

    int minutes = (m % 3600) / 60;

    int seconds = (m % 3600) % 60;

    printf("Hours: %d \nMinutes: %d \nSeconds: %d", hours, minutes, seconds);

    return 0;
}
