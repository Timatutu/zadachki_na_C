#include <stdio.h>

int main(){
    int a;
    printf("Введите кол-во космонавтов: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("Можно доставить без остатка\n");
    } else {
        printf("Нельзя доставить без остатка\n");
    }

    return 0;

}