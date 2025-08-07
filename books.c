#include <stdio.h>

struct Book {
    char title[100];
    char author[100];
    float price;
};

void displayBook(struct Book b) {
    printf("\n Title: %s\nAuthor: %s\nPrice: %.2f\n", b.title, b.author, b.price);
}

int main() {
    struct Book b;
    printf("Enter book title: ");
    scanf("%s", b.title);
    printf("Enter author: ");
    scanf("%s", b.author);
    printf("Enter price: ");
    scanf("%f", &b.price);

    displayBook(b);
    return 0;
}
