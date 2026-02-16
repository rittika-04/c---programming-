#include <stdio.h>

int main(){
    int n,i=0;
    scanf("%d",&n);
    int a[n];
    for(i=0; i<=n; i++){
        scanf("%d", &a[i]);
    }
    int num;
    scanf("%d", &num);
    for(i=0; i<=n; i++){
        if(a[i]>num);
        break;
    }
    #
    for(int j=n; j>i; j--){
        a[j]=a[j-1];
    }

    a[i]=num;

    for(int k=0; k<n+1; k++){
        printf("%d", a[k]);
    }
    return 0;
}