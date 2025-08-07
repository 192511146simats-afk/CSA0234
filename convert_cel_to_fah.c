#include <stdio.h>

int main() {
    float celsius = 37.0;
    float fahrenheit = (celsius * 9 / 5) + 32;
    printf("%.2f°C = %.2f°F\n", celsius, fahrenheit);
    return 0;
}
