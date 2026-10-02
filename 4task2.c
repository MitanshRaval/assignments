#include <stdio.h>

int main()
{
    float price, discount, discountAmount, finalPrice;
    int isMember;

    printf("Enter product price: ");
    scanf("%f", &price);

    printf("Enter discount percentage: ");
    scanf("%f", &discount);

    printf("Are you a member? (1 = Yes, 0 = No): ");
    scanf("%d", &isMember);

    discountAmount = price * discount / 100;
    finalPrice = price - discountAmount;

    if (isMember == 1)
    {
        finalPrice = finalPrice - (finalPrice * 5 / 100);
    }

    printf("Final Price = %.2f\n", finalPrice);

    return 0;
}