#include <stdio.h>

int main() {
    int a[10][10], r, c, i, j, sum = 0;
    int *ptr;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter elements:\n");
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    ptr = &a[0][0];
    for (i = 0; i < r * c; i++)
        sum += *(ptr + i);

    printf("Sum = %d\n", sum);
    return 0;
}
