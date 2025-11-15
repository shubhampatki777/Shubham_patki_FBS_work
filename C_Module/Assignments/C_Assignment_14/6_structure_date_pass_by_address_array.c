//Structure
//6. Date (date, month, year)
#include<stdio.h>

struct Date {
    int date, month, year;
};
void store(struct Date d[], int n) {
    for(int i=0; i<n; i++) {
        printf("Enter date month year: ");
        scanf("%d %d %d", &d[i].date, &d[i].month, &d[i].year);
    }
}
void display(struct Date d[], int n) {
    for(int i=0; i<n; i++) {
        printf("\nDate: %02d/%02d/%d\n", d[i].date, d[i].month, d[i].year);
    }
}
void main() {
    struct Date d[2];
    store(d, 2);
    display(d, 2);
}
