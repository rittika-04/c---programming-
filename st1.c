#include <stdio.h>

int main() {
    char st1[100], st2[100];
    int i, j;
    printf("Enter the first string: ");
    scanf("%s", st1);
    printf("Enter the second string: ");
    scanf("%s", st2);
    for (i = 0; st1[i] != '\0'; i++);
    st1[i] = ' ';
    i++;
    for (j = 0; st2[j] != '\0'; j++) {
        st1[i] = st2[j];
        i++;
    }
    st1[i] = '\0';
    printf("%s \n%s", st1, st2);
    return 0;
}
