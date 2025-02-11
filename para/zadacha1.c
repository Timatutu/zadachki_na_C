#include <stdio.h>

int main(){
    int min, max, c;
    min = 60;
    max = 90;

    printf("Введите ваш вес: ");
    scanf("%d", &c);

    if(c > min && c < max){ printf("Вы проходите на корабль \n"); } else { printf("Вы не проходите на борт \n"); }
}

