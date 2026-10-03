#include<stdio.h>


void addToCart(char cart[][20], int *size, char product[]) {
    int i = *size;

    int j = 0;
    while (product[j] != '\0') {
        cart[i][j] = product[j];
        j++;
    }
    cart[i][j] = '\0';

    (*size)++;

    printf("Updated Cart:\n");

    for (i = 0; i < *size; i++) {
        printf("%s\n", cart[i]);
    }
}

int main() {
    char cart[10][20] = {"Laptop", "Mouse"};
    int size = 2;

    addToCart(cart, &size, "Keyboard");

    return 0;
}