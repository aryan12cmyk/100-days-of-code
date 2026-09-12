#include <stdio.h>
int main() {
    double a, b, c;
    printf("Enter three sides of triangle: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == b && b == c)
        printf("Equilateral Triangle\n");
    else if (a == b || b == c || a == c)
        printf("Isosceles Triangle\n");
    else
        printf("Scalene Triangle\n");
    return 0;
}
