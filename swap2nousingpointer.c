#include <stdio.h>

int main() {
    int n1, n2;
    int *ptr1, *ptr2;
    printf("Enter 1st number: ");
    scanf("%d", &n1);
    printf("Enter 2nd number: ");
    scanf("%d", &n2);
    ptr1 = &n1;
    ptr2 = &n2;
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;
    printf("After swapping: %d %d\n", *ptr1, *ptr2);
    return 0;
}
