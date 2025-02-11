#include <stdio.h>

int main() {
    char a;

    printf("Введите букву: ");
    scanf(" %c", &a);
    if (a >= 'A' && a <= 'Z') {
        printf("Буква входит в деапозон!)))))\n");
    } else {
        printf("Буква не входит в деапозон!(((((\n");
    }
    return 0;

}