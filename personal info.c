#include <stdio.h>

struct Person {
    char name[100];
    int age;
    char gender[10];
};

void greetPerson(struct Person p) {
    printf(" Hello %s (%s), age %d.\n", p.name, p.gender, p.age);
}

int main() {
    struct Person person;
    printf("Enter name: ");
    scanf("%s", person.name);
    printf("Enter age: ");
    scanf("%d", &person.age);
    printf("Enter gender: ");
    scanf("%s", person.gender);

    greetPerson(person);
    return 0;
}
