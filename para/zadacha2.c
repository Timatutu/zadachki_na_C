#include <stdio.h>

int main(){
    int rast, c;
    rast = 500;

    printf("Введите растояние до ближ станции: ");
    scanf("%d", &c);

    if(c > rast){ printf("Вы не доедите \n"); } else { printf("Вы доедите, саго \n"); }
}

