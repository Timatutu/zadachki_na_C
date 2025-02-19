#include <stdio.h>

int main(){
    int d;
    printf("Введите градус: ");
    scanf("%d", &d);

    if (d >= -180 && d <= 180) {
        printf("Входит в допустимый диапазон\n");
    } else {
        printf("Выходит за допустимый диапазон\n");
    }

    return 0;
}