#include <stdio.h>

void copyString(char *src, char *dest) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main() {
    char source[100], destination[100];
    printf("Enter a string: ");
    scanf("%s", source);

    copyString(source, destination);
    printf("Copied string: %s\n", destination);
    return 0;
}
