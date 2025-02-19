#include <stdio.h>

struct Stud
{
    char name[50];
    int age;
    float oceenka;
};

int main() {
    int a;
    scanf("%d", &a);
    struct Stud* students = malloc(sizeof(struct Stud) * a);
    
    
    
}
