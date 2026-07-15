#include <stdio.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee emp[3];
    int i;

    printf("Enter details of 3 employees:\n");

    for(i = 0; i < 3; i++) {
        printf("\nEmployee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%d", &emp[i].id);

        printf("Employee Name: ");
        scanf("%s", emp[i].name);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n----- Employee Records -----\n");

    for(i = 0; i < 3; i++) {
        printf("\nEmployee ID : %d", emp[i].id);
        printf("\nName        : %s", emp[i].name);
        printf("\nSalary      : %.2f\n", emp[i].salary);
    }

    return 0;
}