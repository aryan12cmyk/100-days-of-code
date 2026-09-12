#include <stdio.h>
int main() {
    double a, b, result;
    char op;
    printf("Enter first number, operator (+ - * / %%), second number: ");
    scanf("%lf %c %lf", &a, &op, &b);
    switch (op) {
        case '+':
            result = a + b;
            printf("Result = %.2lf\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %.2lf\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %.2lf\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result = %.2lf\n", result);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if ((int)b != 0) {
                printf("Result = %d\n", (int)a % (int)b);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }
    return 0;
}
