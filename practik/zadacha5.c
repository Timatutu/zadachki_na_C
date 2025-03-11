#include <stdio.h>
#include <stdlib.h>

typedef union {
    int num1;
    char str[30];
    float num2;
} DATA;

int main(){
    int n;
    scanf("%d", &n);

    DATA data;

    if (n == 1) {
        scanf("%d", &data.num1);
        printf("Integer: %d\n", data.num1);
    }
    else if (n == 2){
        scanf("%f", &data.num2);
        printf("Float: %.2f\n", data.num2);
    }

    else if (n == 3){
        scanf("%s", data.str);
        printf("String: %s\n", data.str);
    }

    else printf("Incorrect\n");
}