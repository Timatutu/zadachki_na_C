#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[20];
    char posicia[20];
    float solk;
} EMP;

int main(){
    int n;
    scanf("%d", &n);

    EMP* emp = malloc(sizeof(EMP) * n);

    for (int i = 0; i < n; i++){
        scanf("%s %s %f", emp[i].name, emp[i].posicia, &emp[i].solk);
    }

    for (int i = 0; i < n; i++){
        printf("\nName: %s\nPosition: %s\nSalary: %.2f\n", emp[i].name, emp[i].posicia, emp[i].solk);
    }
}