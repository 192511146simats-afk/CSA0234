#include <stdio.h>

struct Inventory {
    char itemName[100];
    int quantity;
    float price;
};

int main() {
    struct Inventory item;

    printf("Enter item name: ");
    scanf("%s", item.itemName);
    printf("Enter quantity: ");
    scanf("%d", &item.quantity);
    printf("Enter price: ");
    scanf("%f", &item.price);

    printf("\n🧾 Inventory Record:\n");
    printf("Item: %s\nQuantity: %d\nPrice: ₹%.2f\n", item.itemName, item.quantity, item.price);
    return 0;
}
