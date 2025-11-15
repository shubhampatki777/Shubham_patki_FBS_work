//Structure
//2.Employee (id, name, salary)
#include<stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};
void store(struct Employee emp[], int n) {
    for(int i = 0; i < n; i++) {
        printf("Enter ID, Name, Salary: ");
        scanf("%d %s %f", &emp[i].id, emp[i].name, &emp[i].salary);
    }
}
void display(struct Employee emp[], int n) {
    for(int i = 0; i < n; i++) {
        printf("\nID: %d\nName: %s\nSalary: %.2f\n", emp[i].id, emp[i].name, emp[i].salary);
    }
}
void main() {
    struct Employee e[2];
    store(e, 2);
    display(e, 2);
}
