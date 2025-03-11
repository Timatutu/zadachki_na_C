#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    int kredi;
    char fop[30];
} Course;

int main(){
    int n;
    scanf("%d", &n);
    Course* courses = malloc(sizeof(Course) * n);

    for (int i = 0; i < n; i++){
        scanf("%s %d %s", courses[i].name, &courses[i].kredi, courses[i].fop);
    }

    for (int i = 0; i < n; i++){
        printf("\nCourse: %s\nCredits: %d\nProfessor: %s\n", courses[i].name, courses[i].kredi, courses[i].fop);
    }
}