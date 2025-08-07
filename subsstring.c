#include <stdio.h>
#include <string.h>

int main() {
    char str[100], sub[100];
    int i, j, k, found;

    printf("Enter main string: ");
    scanf("%s", str);
    printf("Enter substring: ");
    scanf("%s", sub);

    int len1 = strlen(str);
    int len2 = strlen(sub);

    for (i = 0; i <= len1 - len2; i++) {
        found = 1;
        for (j = 0; j < len2; j++) {
            if (str[i + j] != sub[j]) {
                found = 0;
                break;
            }
        }
        if (found) break;
    }

    if (found)
        printf("Substring '%s' found in '%s'\n", sub, str);
    else
        printf("Substring '%s' not found in '%s'\n", sub, str);

    return 0;
}
