#include<stdio.h>

int main(){
    float km;
    int ch;
    printf("Enter the distance in km: ");
    scanf("%f", &km);
    printf("1 press 10 to convert into hecta\n. 2 press 100 to convert into Deca\n. 3 Press 1000 to convert into Metre\n ");
    scanf("%d", &ch);
    switch(ch){
        case 10:
        printf("the distance in Hecta is %.2f", km*10);
        break;
        case 100:
        printf("the distance in Deca is %.2f", km*100);
        break;
        case 1000:
        printf("the distance in Metre is %.2f", km*1000);
        break;
        default:
        printf("Invalid Choice");
    }
}