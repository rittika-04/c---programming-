#include <stdio.h>
void printFib(int n, int a, int b) {
    if (n > 0) {
        int next = a + b;
        printf("%d ", next);
        printFib(n - 1, b, next);
    }
}
int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter an integer.\n");
    } else if (n == 1) {
        printf("0\n");
    } else if (n == 2) {
        printf("0 1\n");
    } else {
        printf("0 1 ");
        printFib(n - 2, 0, 1);
    }
    return 0;
}
