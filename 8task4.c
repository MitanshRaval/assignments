#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;
    char choice;

    do {
        printf("Enter first number: ");
        scanf("%lf", &num1);

        printf("Enter operator (+, -, *, /, %%): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '-':
                result = num1 - num2;
                printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '*':
                result = num1 * num2;
                printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
                break;
            case '/':
                if (num2 == 0) {
                    printf("Error: division by zero is not allowed.\n");
                } else {
                    result = num1 / num2;
                    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
                }
                break;
            case '%':
                if ((int)num2 == 0) {
                    printf("Error: modulo by zero is not allowed.\n");
                } else {
                    result = (int)num1 % (int)num2;
                    printf("%.0lf %% %.0lf = %.0lf\n", num1, num2, result);
                }
                break;
            default:
                printf("Invalid operator!\n");
        }

        printf("Do you want to calculate again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Program ended.\n");
    return 0;
}
