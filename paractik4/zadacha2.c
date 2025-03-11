#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char signal[101];
    printf("Введите сигнал: ");
    scanf("%100s", signal);
    
    char chars[] = "#*";
    size_t start = strspn(signal, chars);
    size_t length = strcspn(signal + start, chars);

    char *message = strndup(signal + start, length);

    printf("Сообщение: %s\n", message);
    printf("Длина сообщения: %zu\n", length);
    free(message);

    return 0;
}
