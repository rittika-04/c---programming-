#include <stdio.h>

int main() {
    int n, i;
    unsigned long long int first = 0, second = 1, next;

    printf("Enter the number of Fibonacci terms to print: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci series (%d terms):\n", n);

    for (i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;   // first two terms are 0 and 1
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%llu ", next);
    }
    printf("\n");

    return 0;
}
