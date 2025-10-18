#include <limits.h>

int fss(int *arr, int n) {
    int min = *arr;
    int second = INT_MAX;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) < min) {
            second = min;
            min = *(arr + i);
        } else if (*(arr + i) > min && *(arr + i) < second) {
            second = *(arr + i);
        }
    }
    return second;
}
