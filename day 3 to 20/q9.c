#include <stdio.h>
#include <math.h>
int main() {
    double principal, rate, time, si, ci;
    printf("Enter principal, rate, and time: ");
    scanf("%lf %lf %lf", &principal, &rate, &time);
    si = (principal * rate * time) / 100;
    ci = principal * pow(1 + rate / 100, time) - principal;
    printf("Simple Interest = %.2lf\n", si);
    printf("Compound Interest = %.2lf\n", ci);
    return 0;
}
