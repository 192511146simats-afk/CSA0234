#include <stdio.h>

int main() {
    float temp;

    printf("Enter the temperature: ");
    scanf("%f", &temp);

    if (temp > 30)
        printf("It's Hot\n");
    else if (temp > 20)
        printf("It's Warm\n");
    else
        printf("It's Cold\n");

    return 0;
}
