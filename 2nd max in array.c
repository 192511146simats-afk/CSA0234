#include <stdio.h>

int main() {
    int arr[100], n, i, max, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    max = second = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            second = max;
            max = arr[i];
        } else if (arr[i] > second && arr[i] != max) {
            second = arr[i];
        }
    }

    printf("Second largest element: %d\n", second);
    return 0;
}
