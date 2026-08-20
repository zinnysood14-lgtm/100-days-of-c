#include <stdio.h>
int main() {
    int sec, hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &sec);

    hours = sec / 3600;
    minutes = (sec % 3600) / 60;
    seconds = (sec % 60);

    printf("Time = %d:%d:%d\n", hours, minutes, seconds);
    return 0;
}