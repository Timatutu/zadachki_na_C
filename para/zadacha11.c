#include <stdio.h>

int main(){
    float o;
    printf("Введите кол-во кислорода: ");
    scanf("%f", &o);

    if (o < 0.15) {
        printf("Экипаж должен включить аварийную систему\n");
    } else {
        printf("Все в норме\n");
    }

    return 0;
}