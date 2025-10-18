#include <stdio.h>

int main() {
    float temp;
    int ch;

    printf("Enter the temp: ");
    scanf("%f", &temp);

    printf("Press 1 to convert in Fahrenheit, press 2 to convert in Kelvin, or press 3 to convert in Romer\n");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Temperature in Fahrenheit: %f\n", 1.8 * temp + 32);
            break;
        case 2:
            printf("Temperature in Kelvin: %f\n", temp + 273.15);
            break;
        case 3:
            printf("Temperature in Romer: %f\n", temp * 0.8);
            break;
        default:
            printf("Invalid Choice\n");
    }

    return 0;
}
