#include <stdio.h>
int main() {
    long totalSeconds, hours, minutes, seconds;
    printf("Enter time in seconds: ");
    scanf("%ld", &totalSeconds);
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;
    printf("%ld:%02ld:%02ld\n", hours, minutes, seconds);
    return 0;
}
