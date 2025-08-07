#include <stdio.h>

struct Employee {
    int empID;
    char name[100];
    float salary;
};

int main() {
    struct Employee e;

    printf("Enter employee ID: ");
    scanf("%d", &e.empID);
    printf("Enter name: ");
    scanf("%s", e.name);
    printf("Enter salary: ");
    scanf("%f", &e.salary);

    printf("\n Employee Info:\n");
    printf("ID: %d\nName: %s\nSalary: ₹%.2f\n", e.empID, e.name, e.salary);
    return 0;
}
