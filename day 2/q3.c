#include <stdio.h>
int main() {
    double length, breadth, area, perimeter;
    printf("Enter length and breadth: ");
    scanf("%lf %lf", &length, &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area = %.2lf\n", area);
    printf("Perimeter = %.2lf\n", perimeter);
    return 0;
}
