#include <stdio.h>
#include <string.h>

void reverseStr(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
    printf("Reversed string: %s\n", str);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    reverseStr(str);
    return 0;
}
