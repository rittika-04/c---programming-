#include <stdio.h>

void bs(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int rb(int arr[], int left, int right, int x) {
    if (left > right) return -1;
    int mid = left + (right - left) / 2;
    if (arr[mid] == x) return mid;
    if (arr[mid] > x) return rb(arr, left, mid - 1, x);
    return rb(arr, mid + 1, right, x);
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    bs(arr, n);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    int x;
    scanf("%d", &x);
    int idx = rb(arr, 0, n - 1, x);
    printf("%d\n", idx);
    return 0;
}
