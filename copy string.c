#include <stdio.h>

int main() {
    char source[100], destination[100], *src, *dest;

    printf("Enter a string: ");
    scanf("%s", source);

    src = source;
    dest = destination;

    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';

    printf("Copied string: %s\n", destination);
    return 0;
}
