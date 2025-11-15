//Structure
//7. Time (hour, min, sec)
#include<stdio.h>

struct Time {
    int hour, min, sec;
};
void store(struct Time *t) {
    printf("Enter hour minute second: ");
    scanf("%d %d %d", &t->hour, &t->min, &t->sec);
}
void display(struct Time *t) {
    printf("\nTime = %02d:%02d:%02d\n", t->hour, t->min, t->sec);
}
void main() {
    struct Time t;
    store(&t);
    display(&t);
}
