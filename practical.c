#include <stdio.h>
int main()
{
    int n, i;
    int patients[100];
    int max, min, maxHour;
    int peakHour;
    int aboveAverage = 0;
    float sum = 0, average;
    printf("Enter number of hours: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of hours.\n");
        return 0;
    }
    printf("Enter number of patients for each hour:\n");

    for (i = 0; i < n; i++)
    {
        printf("Hour %d: ", i + 1);
        scanf("%d", &patients[i]);
    }
    max = patients[0];
    min = patients[0];
    maxHour = 1;
    peakHour = 1;
    for (i = 0; i < n; i++)
    {
        sum += patients[i];

        if (patients[i] > max)
        {
            max = patients[i];
            maxHour = i + 1;
        }

        if (patients[i] < min)
        {
            min = patients[i];
        }
    }
    average = sum / n;

    for (i = 0; i < n; i++)
    {
        if (patients[i] > average)
        {
            aboveAverage++;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (patients[i] == max)
        {
            peakHour = i + 1;
            break;
        }
    }
    printf("\n--- Hospital Emergency Monitoring ---\n");
    printf("Maximum patients: %d\n", max);
    printf("Hour of maximum patients: %d\n", maxHour);
    printf("Minimum patients: %d\n", min);
    printf("Peak hour: %d\n", peakHour);
    printf("Average patients: %.2f\n", average);
    printf("Hours above average: %d\n", aboveAverage);
    return 0;
}