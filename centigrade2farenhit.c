#include <stdio.h>

int main() {
    float cel, fah;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);      // <- Must be "%f" not "&f" or any typo
    fah = (cel * 9.0 / 5.0) + 32.0;
    printf("%.2f Celsius = %.2f Fahrenheit\n", cel, fah);
    return 0;
}
