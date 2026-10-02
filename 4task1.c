
#include <stdio.h>

float calculateTotal(float itemPrice, int quantity)
{
    return itemPrice * quantity;
}

int main()
{
    float price = 100;
    int quantity = 3;

    printf("Total Bill = %.2f\n", calculateTotal(price, quantity));

    return 0;
}