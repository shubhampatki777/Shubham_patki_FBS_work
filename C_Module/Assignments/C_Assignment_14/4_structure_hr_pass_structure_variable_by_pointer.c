//Structure
//4.HR (id, name, salary, commission)
#include<stdio.h>

struct HR {
    int id;
    char name[50];
    float salary, commission;
};
void store(struct HR *h) {
    printf("Enter ID, Name, Salary, Commission: ");
    scanf("%d %s %f %f", &h->id, h->name, &h->salary, &h->commission);
}
void display(struct HR *h) {
    printf("\nID: %d\nName: %s\nSalary: %.2f\nCommission: %.2f\n", h->id, h->name, h->salary, h->commission);
}
void main() {
    struct HR h;
    store(&h);     // pass by address
    display(&h);
}
