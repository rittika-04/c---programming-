#include <stdio.h>
float ca(float l, float b) {
    return l * b;
}
float cp(float l, float b) {
    return 2 * (l + b);
}
int main() {
    float l, b;
    float area, perimeter;
    printf("Enter length of rectangle: ");
    scanf("%f", &l);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &b);
    area = ca(l, b);
    perimeter = cp(l, b);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    return 0;
}
