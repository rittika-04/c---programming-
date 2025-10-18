#include <stdio.h>
int fl(int arr[], int n) {
    int largest = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;  
}
int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];  
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = fl(arr, n);
    printf("The largest element is: %d\n", max);
    return 0;
}
