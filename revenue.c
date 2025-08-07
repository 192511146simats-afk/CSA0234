#include <stdio.h>

struct Revenue {
    float income;
    float expenses;
};

float calculateProfit(struct Revenue r) {
    return r.income - r.expenses;
}

int main() {
    struct Revenue r;
    printf("Enter total income: ");
    scanf("%f", &r.income);
    printf("Enter total expenses: ");
    scanf("%f", &r.expenses);

    float profit = calculateProfit(r);
    printf("Net Profit: %.2f\n", profit);
    return 0;
}
