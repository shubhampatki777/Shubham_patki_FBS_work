//Structure
//3.Admin (id, name, salary, allowance)
#include<stdio.h>

struct Admin {
    int id;
    char name[50];
    float salary, allowance;
};
void store(struct Admin *a) {
    printf("Enter ID, Name, Salary, Allowance: ");
    scanf("%d %s %f %f", &a->id, a->name, &a->salary, &a->allowance);
}
void display(struct Admin *a) {
    printf("\nID: %d\nName: %s\nSalary: %.2f\nAllowance: %.2f\n", a->id, a->name, a->salary, a->allowance);
}
void main() {
    struct Admin a;
    store(&a);
    display(&a);
}
