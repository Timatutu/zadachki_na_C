#include <stdio.h>

int main() {
    int ear;

    printf("Введиите массу объекта: ");
    scanf("%d", &ear);
    float moon = ear * (1.0 / 6);

    printf("Масса объекта на Луне сосотавляет %.1f\n", moon);

    return 0;
}