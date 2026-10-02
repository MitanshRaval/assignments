#include <stdio.h>

int main()
{
    char productName[] = "iPhone 15";
    float price = 69999.50;
    double rating = 4.7;

    printf("Product Name: %s\n", productName);
    printf("Price: %.2f\n", price);
    printf("Rating: %.1lf\n", rating);

    return 0;
}