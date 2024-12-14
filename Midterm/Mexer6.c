#include <stdio.h>

int main()
{
    int regionCode, timeOfDayCode, callDuration;
    double costPerMinute, totalCharge;

    printf("Input the Region Code (1: American Region, 2: Asian Region, 3: African Region, 4: European Region): ");
    scanf("%d", &regionCode);
    printf("Input the Time of Day Code (1 for day, 2 for night): ");
    scanf("%d", &timeOfDayCode);
    printf("Input the duration of the call in minutes: ");
    scanf("%d", &callDuration);

    if (timeOfDayCode == 1) {
        if (regionCode == 1) {
            costPerMinute = 50.0 / 3;
        } else if (regionCode == 2) {
            costPerMinute = 30.0 / 2;
        } else if (regionCode == 3) {
            costPerMinute = 40.0 / 3;
        } else if (regionCode == 4) {
            costPerMinute = 35.0 / 2;
        } else {
            printf("Invalid region code.\n");
            return 1;
        }
    } else if (timeOfDayCode == 2) {
        if (regionCode == 1) {
            costPerMinute = 45.0 / 3;
        } else if (regionCode == 2) {
            costPerMinute = 27.0 / 2;
        } else if (regionCode == 3) {
            costPerMinute = 36.0 / 3;
        } else if (regionCode == 4) {
            costPerMinute = 30.0 / 2;
        } else {
            printf("Invalid region code.\n");
            return 1;
        }
    } else {
        printf("Invalid time of day code.\n");
        return 1;
    }

    totalCharge = costPerMinute * callDuration;

    if (regionCode == 1) {
        printf("You've chosen American region, and you've chosen %s time and the duration you input is %d minutes.\n", timeOfDayCode == 1 ? "day" : "night", callDuration);
    } else if (regionCode == 2) {
        printf("You've chosen Asian region, and you've chosen %s time and the duration you input is %d minutes.\n", timeOfDayCode == 1 ? "day" : "night", callDuration);
    } else if (regionCode == 3) {
        printf("You've chosen African region, and you've chosen %s time and the duration you input is %d minutes.\n", timeOfDayCode == 1 ? "day" : "night", callDuration);
    } else if (regionCode == 4) {
        printf("You've chosen European region, and you've chosen %s time and the duration you input is %d minutes.\n", timeOfDayCode == 1 ? "day" : "night", callDuration);
    }

    printf("So the total charge is: P %.2lf\n", totalCharge);

    return 0;
}

