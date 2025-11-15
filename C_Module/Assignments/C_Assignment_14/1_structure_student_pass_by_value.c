//Structure
//1.Student (rollNo, name, marks)
#include<stdio.h>

struct Student {
    int rollNo;
    char name[50];
    float marks;
};
void display(struct Student s) {  // pass by value
    printf("\nRoll No: %d\nName: %s\nMarks: %.2f\n", s.rollNo, s.name, s.marks);
}
struct Student store() {
    struct Student s;
    printf("Enter Roll No, Name, Marks: ");
    scanf("%d %s %f", &s.rollNo, s.name, &s.marks);
    return s;
}
void main() {
    struct Student s = store();
    display(s);
}
