#include <stdio.h>

int main(){
    int ymp;
    printf("Введите температуру: \n");
    scanf("%d", &ymp);

    if (ymp >= -150 && ymp <= 120){
        printf("Температура в допустимых значениях\n");
    } else {
        printf("Температура в не допустимых значениях\n");
    }

    return 0;
}