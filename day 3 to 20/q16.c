#include <stdio.h>
int main() {
    double a, b, c, largest;
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;
    printf("Largest number = %.2lf\n", largest);
    return 0;
}
