#include <stdio.h>

int main() {
    int today, a;
    today = 20250211;

    printf("Сегодня:", today);
    printf("Введите дату в формате: 20250210 – 10 февраля 2025 года Ваша дата: ");
    scanf("%d", &a);

    if (a > today){
        printf("Это уже будущее \n");
    } else {
        printf("Это прошлое \n");
    }

    return 0;

}