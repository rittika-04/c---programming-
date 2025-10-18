#include<stdio.h>

int main(){

    int n=0, ncp=0, p=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    ncp=n;
    while(ncp!=0){
        p = (p*10)+(ncp%10);
        ncp/=10;
    }
    if(n==p){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
}