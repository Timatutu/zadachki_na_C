#include <stdio.h>

struct person {
    char name[50];
    int age;
    float height;
};

int main() {
    struct person p = {"float", 30, 1.75};
    printf("Name: %s, age: %d, hei: %.2f\n", p.name, p.age, p.height);
    return 0;
}






























