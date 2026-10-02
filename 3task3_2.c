#include <stdio.h>

void main()
{
    const float GST = 18.0;
    float basePrice = 500.0;
    float gstAmount,finalPrice;
   

    gstAmount = basePrice * GST / 100;
    finalPrice = basePrice + gstAmount;

    printf("Base Price:%.2f\n",  basePrice);
    printf("GST: %.2f\n",        gstAmount);
    printf("Final Price:%.2f\n",finalPrice);

   
}