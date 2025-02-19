#include <stdio.h>

int main() {
    double speed; 
    double data;

    printf("Введите скорость передачи данных (Кбит/с): ");
    scanf("%lf", &speed);

    printf("Введите объем данных (МБ): ");
    scanf("%lf", &data);

    double data_k = data * 8192;
    double time_s = data_k / speed;
    double time_m = time_s / 60;

    printf("Время передачи: %.0f минут %.1f секунд\n", time_m, time_s);

    return 0;
}