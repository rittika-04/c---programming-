#include <stdio.h>
#include <math.h>
int get_fib(int num) {
    if (num == 0) {
        return 0;
    }
    if (num == 1) {
        return 1;
    }
    int f = 0;
    int s = 1;
    int next;
    for (int i = 2; i <= num; i++) {
        next = f + s;
        f = s;
        s = next;
    }
    return s;
}
int get_prime(int num) {
    int p_num = 2;
    int count = 0;
    
    while (count < num) {
        int prime = 1;
        for (int i = 2; i <= sqrt(p_num); i++) {
            if (p_num % i == 0) {
                prime = 0;
                break;
            }
        }
        
        if (prime == 1) {
            count++;
            if (count == num) {
                return p_num;
            }
        }
        p_num++;
    }
    return 0; 
}
int main() {
    int n;
    scanf("%d", &n);
    int ans;
    if (n % 2 == 0) {
        int p_index = n / 2;
        ans = get_prime(p_index);
    } else {
        int f_index = n / 2;
        ans = get_fib(f_index);
    }
    printf("%d\n", ans);
    return 0;
}
