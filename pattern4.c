#include <stdio.h>

int main() {
    int n;
    printf("Enter number of lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {          // Loop from 1 to n
        for (int j = n - 1; j >= i; j--) {  // Print spaces
            printf(" ");
        }
        for (int k = 1; k <= i; k++) {      // Print stars
            printf("*");
        }
        printf("\n");                        // Print newline
    }
    return 0;
}
