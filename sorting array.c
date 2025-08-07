#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;
    int *p1, *p2;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            p1 = &arr[i];
            p2 = &arr[j];
            if (*p1 > *p2) {
                temp = *p1;
                *p1 = *p2;
                *p2 = temp;
            }
        }
    }

    printf("Sorted array:\n");
    for (i = 0; i < n; i++)
        printf("%d ", *(arr + i));

    return 0;
}
