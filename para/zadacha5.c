#include <stdio.h>

int main() {
    double raschet, facticheski;
    raschet = 210.12;
    printf("Сейчас скорость: '%f' \n", raschet);
    printf("Введиде фактическую: ");
    scanf("%lf", &facticheski);

    if (fabs(facticheski - raschet) >= 0.1){
        printf("Орбита спутника нестабильно \n");
    } else {
        printf("Орбита спутника стабильна \n");
    }

    return 0;
}