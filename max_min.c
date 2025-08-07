#include <stdio.h>

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    if (x > y)
        printf("Max: %d\n", x);
    else
        printf("Max: %d\n", y);
    return 0;
}
