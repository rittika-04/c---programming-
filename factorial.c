#include <stdio.h>

int main() {
    int n, i, fact = 1;  // Initialize fact to 1
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative factorial doesn't exist.");
    } else {
        for (i = 1; i <= n; i++) {
            fact *= i;  // Multiply fact by i in each iteration
        }
        printf("Factorial of %d = %d\n", n, fact);
    }
    return 0;
}
