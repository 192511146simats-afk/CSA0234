#include <stdio.h>

int main() {
    char str[100], *start, *end, temp;
    int len = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while (str[len] != '\0') len++; // get length

    start = str;
    end = str + len - 1;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
