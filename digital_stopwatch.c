#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int seconds) {
    int milli_seconds = 1000 * seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}

int main() {
    int hours = 0, minutes = 0, seconds = 0;
    char choice;

    printf("⏱️ DIGITAL STOPWATCH\n");
    printf("Press 's' to start, 'q' to quit\n");
    scanf(" %c", &choice);

    if (choice == 's' || choice == 'S') {
        while (1) {
            system("cls"); 

            printf("⏱️ DIGITAL STOPWATCH\n\n");
            printf("Time: %02d : %02d : %02d\n", hours, minutes, seconds);
            printf("\nPress Ctrl + C to stop\n");

            delay(1);
            seconds++;

            if (seconds == 60) {
                minutes++;
                seconds = 0;
            }
            if (minutes == 60) {
                hours++;
                minutes = 0;
            }
        }
    }
    else {
        printf("Stopwatch exited.\n");
    }

    return 0;
}
