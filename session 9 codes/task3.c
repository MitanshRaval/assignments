#include <stdio.h>

float calculateAverage(int amounts[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum = sum + amounts[i];
    }

    return (float)sum / size;
}

int main()
{
    int dailyOrders[7] = {250, 180, 320, 150, 400, 275, 225};

    float average = calculateAverage(dailyOrders, 7);

    printf("Average weekly spend: ₹%.2f\n", average);

    return 0;
}
