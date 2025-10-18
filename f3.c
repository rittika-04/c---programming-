#include <stdio.h>
#include<limits.h>
void ra(int *arr, int n) {
    printf("Reversed array ");
    for(int i = n - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    ra(arr, n);
    printf("Reversed array insie main:\n");
    for(int i=n-1; i>=0; i--){
        printf("%d ", arr[i]);
    }
    return 0;
}
