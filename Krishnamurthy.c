#include <stdio.h>

// Function to calculate factorial of a digit
int factorial(int n) {
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int num, originalNum, sum = 0, rem;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    originalNum = num;
    while (num > 0) {
        rem = num % 10;
        sum += factorial(rem);
        num /= 10;
    }

    if (sum == originalNum)
        printf("%d is a Krishnamurthy number.\n", originalNum);
    else
        printf("%d is not a Krishnamurthy number.\n", originalNum);

    return 0;
}
