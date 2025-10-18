#include<stdio.h>

int main(){

    int a,b, gcd;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    for(int i=1; i<=a && i<=b; i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    int lcm=a*b/gcd;
    printf("the gcd and lcm of two number %d and %d is %d and %d.", a, b, gcd, lcm);
}