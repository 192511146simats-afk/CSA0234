#include <stdio.h>
#include <ctype.h>

void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = toupper(str[i]);
    printf("Uppercase string: %s\n", str);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    toUpperCase(str);
    return 0;
}
