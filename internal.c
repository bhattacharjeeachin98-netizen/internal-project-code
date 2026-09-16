#include <stdio.h>

int main()
{
    int n, i;
    int belowThreshold = 0;
    int lowestPosition = 0;
    float threshold;
    float attendance[100];
    float sum = 0;
    float average;
    float lowest;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Invalid number of students.\n");
        return 0;
    }

    printf("Enter attendance percentages:\n");

    for (i = 0; i < n; i++)
    {
        printf("Student %d: ", i + 1);
        scanf("%f", &attendance[i]);
    }

    printf("Enter attendance threshold: ");
    scanf("%f", &threshold);

   
    lowest = attendance[0];

    for (i = 0; i < n; i++)
    {
       
        if (attendance[i] < threshold)
        {
            belowThreshold++;
        }

       
        sum = sum + attendance[i];

     
        if (attendance[i] < lowest)
        {
            lowest = attendance[i];
            lowestPosition = i;
        }
    }

    average = sum / n;

    printf("\n--- Attendance Analysis ---\n");
    printf("Students below threshold: %d\n", belowThreshold);
    printf("Lowest attendance: %.2f%%\n", lowest);
    printf("Position: %d\n", lowestPosition + 1);
    printf("Average attendance: %.2f%%\n", average);

    return 0;
}
