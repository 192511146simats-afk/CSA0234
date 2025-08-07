#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp;
    int i, j, len;

    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    if (strlen(str1) != strlen(str2)) {
        printf("Strings are not anagrams\n");
        return 0;
    }

    len = strlen(str1);

    // Sort str1
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
        }
    }

    // Sort str2
    for (i = 0; i < len - 1; i++) {
        for (j = i + 1; j < len; j++) {
            if (str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    // Compare sorted strings
    if (strcmp(str1, str2) == 0)
        printf("Strings are anagrams\n");
    else
        printf("Strings are not anagrams\n");

    return 0;
}
