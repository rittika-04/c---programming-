#include <stdio.h>

int main() {
    int a, b, ch;
    printf("Enter two variables: ");
    scanf("%d %d", &a, &b);

    printf("Enter 1 for add and 2 for multiplication: ");
    scanf("%d", &ch);

    if (ch == 1) {
        printf("%d + %d = %d", a, b, a + b);
    } else if (ch == 2) {
        printf("%d * %d = %d", a, b, a * b);
    } else {
        printf("wrong choice");
    }

    return 0;
}
