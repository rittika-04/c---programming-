#include<stdio.h>

int main(){
    int a,b,c;
    printf("Enter values of three: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a<b & a<c){
        printf("%d is the smallest among three values.", a);
    }
    else if(a>b && b<c){
        printf("%d is the smallest among three values.", b);
    }
    else {
        printf("%d is the smallest among three values.", c);
    }
    return 0;
}