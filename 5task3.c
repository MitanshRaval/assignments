#include <stdio.h>

int main()
{
    float amount, discount, finalAmount;

    printf("Enter total cart amount: ");
    scanf("%f", &amount);

    if (amount > 2000)
    {
        discount = amount * 20 / 100;
        finalAmount = amount - discount;

        printf("20%% discount applied\n");
        printf("Final amount = %.2f\n", finalAmount);
    }
    else
    {
        if (amount > 1000)
        {
            discount = amount * 10 / 100;
            finalAmount = amount - discount;

            printf("10%% discount applied\n");
            printf("Final amount = %.2f\n", finalAmount);
        }
        else
        {
            printf("No discount\n");
            printf("Final amount = %.2f\n", amount);
        }
    }

    return 0;
}