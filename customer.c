#include <stdio.h>

struct Customer {
    int id;
    char name[100];
    char city[100];
};

int main() {
    struct Customer c;

    printf("Enter customer ID: ");
    scanf("%d", &c.id);
    printf("Enter customer name: ");
    scanf("%s", c.name);
    printf("Enter city: ");
    scanf("%s", c.city);

    printf("\nCustomer Details:\n");
    printf("ID: %d\nName: %s\nCity: %s\n", c.id, c.name, c.city);
    return 0;
}
