//Structure
//5. SalesManager (id, name, salary, incentive, target)
#include<stdio.h>

struct SalesManager {
    int id;
    char name[50];
    float salary, incentive, target;
};
void display(struct SalesManager sm) {  // pass by value
    printf("\nID: %d\nName: %s\nSalary: %.2f\nIncentive: %.2f\nTarget: %.2f\n", sm.id, sm.name, sm.salary, sm.incentive, sm.target);
}
struct SalesManager store() {
    struct SalesManager sm;
    printf("Enter ID, Name, Salary, Incentive, Target: ");
    scanf("%d %s %f %f %f", &sm.id, sm.name, &sm.salary, &sm.incentive, &sm.target);
    return sm;
}
void main() {
    struct SalesManager s = store();
    display(s);
}
