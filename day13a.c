#include <stdio.h>

int main() {
    float a, b;
    char op;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Result = %.2f", a + b);
            break;
        case '-':
            printf("Result = %.2f", a - b);
            break;
        case '*':
            printf("Result = %.2f", a * b);
            break;
        case '/':
            printf("Result = %.2f", a / b);
            break;
        case '%':
            printf("Result = %d", (int)a % (int)b);
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}