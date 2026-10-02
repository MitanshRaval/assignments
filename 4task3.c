#include <stdio.h>

int isEligibleForOffer(int age, float orderValue)
{
    if (age >= 18 && orderValue > 500)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int age;
    float orderValue;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter order value: ");
    scanf("%f", &orderValue);

    if (isEligibleForOffer(age, orderValue))
    {
        printf("Eligible for offer\n");
    }
    else
    {
        printf("Not eligible for offer\n");
    }

    return 0;
}