#include <stdio.h>
#include <stdlib.h>


typedef struct {
    char name[50];
    int age;
    float g;
} Student;

int main() {
    int n;
    scanf("%d", &n);
    Student* students = malloc(sizeof(Student) * n);

    for (int i = 0; i < n; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, &students[i].g);
    }

    for (int i = 0; i < n; i++) {
        Student* s = &students[i];
        printf("Name: %s\nAge: %d\nGPA: %.1f\n\n", s->name, s->age, s->g);
    }
}