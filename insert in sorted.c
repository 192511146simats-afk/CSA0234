#include <stdio.h>

int main() {
    int arr[100], n, val, i, pos;

    printf("Enter number of sorted elements: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value to insert: ");
    scanf("%d", &val);

    for (pos = 0; pos < n; pos++) {
        if (val < arr[pos])
            break;
    }

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = val;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
