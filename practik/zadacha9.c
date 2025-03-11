#include <stdio.h>

typedef enum {
    Sunny, Cloudy, Rainy
} Condition;

typedef struct {
    float tmp;
    float um;
    Condition condition;
} Weather;

int main(){
    Weather weather;
    scanf("%f %f %d", &weather.tmp, &weather.um, &weather.condition);

    printf("\nTemperature: %.1f°C\nHumidity: %.1f°C\nCondtition: ", weather.tmp, weather.um);

    switch(weather.condition) {
        case Sunny: printf("Sunny\n"); break;
        case Cloudy: printf("Cloudy\n"); break;
        case Rainy: printf("Rainy\n"); break;
    }
}