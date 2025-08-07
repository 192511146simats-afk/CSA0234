#include <stdio.h>

int main() {
    char str1[100], str2[100], *p1, *p2;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    p1 = str1;
    while (*p1 != '\0') p1++; // move to end of str1
    p2 = str2;
    while (*p2 != '\0') {
        *p1 = *p2;
        p1++;
        p2++;
    }
    *p1 = '\0';

    printf("Concatenated string: %s\n", str1);
    return 0;
}
