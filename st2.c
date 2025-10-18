#include <stdio.h>

int main() {
    char st1[100], st2[100];
    int i = 0, a = 0;
    scanf("%s", st1);
    scanf("%s", st2);
    while(st1[i] != '\0' && st2[i] != '\0') {
        if(st1[i] != st2[i]) {
            a = 1; 
            break;
        }
        i++;
    }
    if(st1[i] != '\0' || st2[i] != '\0') {
        a = 1; 
    }
    if(a == 0) {
        printf("yes\n");  
    } else {
        printf("no\n");  
    }
    return 0;
}
