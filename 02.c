#include <stdio.h>

int main() {
    int totalMinutes;
    int hours, minutes;

    printf("Enter total minutes: ");
    scanf("%d", &totalMinutes);

    hours = totalMinutes / 60;   
    minutes = totalMinutes % 60; 

    printf("%d minutes is %d hour(s) and %d minute(s)\n", totalMinutes, hours, minutes);

    return 0;
}
