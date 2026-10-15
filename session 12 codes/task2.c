#include <stdio.h>

struct FoodItem
{
    char itemName[50];
    float price;
    float rating;
};

int main()
{
    struct FoodItem menu[3] =
    {
        {"Paneer Pizza", 299.00, 4.5},
        {"Veg Burger", 149.00, 4.2},
        {"Masala Dosa", 120.00, 4.7}
    };

    for (int i = 0; i < 3; i++)
    {
        printf("\nFood Item %d\n", i + 1);
        printf("Name: %s\n", menu[i].itemName);
        printf("Price: ₹%.2f\n", menu[i].price);
        printf("Rating: %.1f\n", menu[i].rating);
    }

    return 0;
}
