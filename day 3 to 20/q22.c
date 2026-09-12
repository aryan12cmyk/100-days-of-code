#include <stdio.h>
int main() {
    double cp, sp, percentage;
    printf("Enter cost price and selling price: ");
    scanf("%lf %lf", &cp, &sp);
    if (sp > cp) {
        percentage = ((sp - cp) / cp) * 100;
        printf("Profit = %.2lf%%\n", percentage);
    } else if (cp > sp) {
        percentage = ((cp - sp) / cp) * 100;
        printf("Loss = %.2lf%%\n", percentage);
    } else {
        printf("No Profit, No Loss\n");
    }
    return 0;
}
