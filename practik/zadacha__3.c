#include <stdio.h>
#include <stdlib.h>

typedef struct {int day; int month; int year;} Date;

typedef struct {
    char ivent_in_name[20];
    Date date;
    char descriptions[40];
} ivent;

int main(){
    int n;
    scanf("%d", &n);

    ivent* ivents = malloc(sizeof(ivent) * n);

    for (int i = 0; i < n; i++){
        scanf("%s %d %d %d %s", ivents[i].ivent_in_name, &ivents[i].date.day, &ivents[i].date.month, &ivents[i].date.year, ivents[i].descriptions);
    }

    for (int i = 0; i < n; i++){
        printf("\nEvent: %s\nDate: %d/%d/%d\nDescription: %s\n", ivents[i].ivent_in_name, ivents[i].date.day, ivents[i].date.month, ivents[i].date.year, ivents[i].descriptions);
    }
}