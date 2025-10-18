#include<stdio.h>
int main(){
    int yr;
    printf("Enter a Year: ");
    scanf("%d", &yr);
    if(((yr%4==0) && (yr%100!=0)) || (yr%400==0)){
        printf("%d is the lear year", yr);
    }
    else{
        printf("%d is not the lear year", yr);
    }
}