#include <stdio.h>

int length(char str[]) {
    if (str[0] == '\0')
        return 0;
    return 1 + length(str + 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of string = %d\n", length(str));
    return 0;
}
