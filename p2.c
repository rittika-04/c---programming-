#include<stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b =temp;
}

void res(int a[], int st, int end){
    while(st<end){
        swap(&a[st], &a[end]);  
        st++;
        end--;
    }
}

void rot(int a[], int n, int k){
    k=k%n;
    res(a, 0, k-1);        
    res(a, k, n-1);          
    res(a, 0, n-1);        
}

int main(){
    int n;
    scanf("%d", &n);
    int a[100];            
    for(int i=0; i<n; i++){ 
        scanf("%d", &a[i]);
    }
    
    int k;
    scanf("%d", &k);
    rot(a, n, k);
    for(int i=0; i<n; i++){
        printf("%d ", a[i]);  
    }
    printf("\n");
}
