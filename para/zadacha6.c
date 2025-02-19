#include <stdio.h>

int main() {
    float a;
    printf("Введите частоту:");
    scanf("%lf", &a);

    if (a >= 2.5 && a <= 3.5) {
        printf("Связь стабильна");
    } else {
        printf("Связь не стабильна");
    }

    return 0;

}